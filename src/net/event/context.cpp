#include <net/event/context.h>

#include <format>
#include <print>
#include <cstring>

using namespace nlohmann;
using namespace boost;

namespace flux::net::event {

EventContext::EventContext(asio::ip::tcp::socket socket)
    : socket(std::move(socket)) {
  // Init player from connection (somehow)
  std::println("Initialized EventContext with client {}", this->socket.remote_endpoint().address().to_string());
}

asio::awaitable<void> EventContext::sendPacketAsync(PacketBase& packet) {
  auto data = json::to_bson(packet.getData());
  auto buf = std::make_shared<std::vector<uint8_t>>(data.size());
  std::memcpy(buf->data(), data.data(), data.size());

  socket.async_write_some(asio::buffer(*buf),
                          [](std::error_code ec, std::size_t) {
                            if (ec) throw ec;
                          });
  co_return;
}

asio::ip::address EventContext::getAddress() {
  return socket.remote_endpoint().address();
}

asio::awaitable<json> EventContext::recvPacketQueueAsync() {
  auto buf = std::make_shared<std::vector<char>>(1024);

  std::size_t recvBytes = co_await socket.async_read_some(asio::buffer(*buf),
                                                          asio::use_awaitable);
  if (recvBytes < sizeof(int32_t)) {
    throw std::runtime_error("Incomplete length header");
  }

  try {
    co_return json::from_bson(buf->data() + 4, buf->data() + recvBytes);
  } catch (const json::parse_error& e) {
    throw std::runtime_error(std::format("BSON parsing error: {}", e.what()));
  }
}

} // namespace flux::net::event
