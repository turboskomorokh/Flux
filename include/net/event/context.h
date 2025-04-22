#pragma once

#include <boost/asio.hpp>
#include <net/packet.h>
#include <format>
#include <memory>
#include <print>

using namespace boost;

namespace flux::net::event {
class EventContext {
 public:
  asio::ip::tcp::socket socket;

  asio::awaitable<void> sendPacketAsync(const PacketBase& packet) {
    auto data = nlohmann::json::to_bson(packet.data);
    auto buf = std::make_shared<std::vector<uint8_t>>(data.size());
    std::memcpy(buf->data(), data.data(), data.size());

    socket.async_write_some(asio::buffer(*buf),
                            [](std::error_code ec, std::size_t) {
                              if (ec) throw ec;
                            });
    co_return;
  }

  asio::awaitable<nlohmann::json> recvPacketQueueAsync() {
    auto buf = std::make_shared<std::vector<uint8_t>>(1024);

    // Чтение первых 4 байт для получения длины
    std::size_t n = co_await socket.async_read_some(asio::buffer(*buf),
                                                    asio::use_awaitable);
    if (n < 4) {
      throw std::runtime_error("Incomplete length header");
    }

    for(auto byte : *buf) {
      std::print("{:x} ", byte);
    } 
    std::print("\n");

    // Парсим BSON в JSON
    try {
      co_return nlohmann::json::from_bson(buf->data() + 5);
    } catch (const nlohmann::json::parse_error& e) {
      throw std::runtime_error(std::format("BSON parsing error: {}", e.what()));
    }
  }

  EventContext(asio::ip::tcp::socket socket) : socket(std::move(socket)) {
    // Init player from connection
  }
};
} // namespace flux::net::event