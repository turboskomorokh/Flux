#include <net/event/handler.h>
#include <net/event/context.h>
#include <boost/asio/awaitable.hpp>
#include <print>
#include <net/protocol/msg.h>

using namespace nlohmann;
using namespace boost;

namespace flux::net::event {

void EventHandler::invokeEvent(EventContext& ec, PacketBase& packet) {
  std::println("Received packet {} from client from {}", packet.getID(), ec.getAddress().to_string());
}

asio::awaitable<void> EventHandler::handle(EventContext ec) {
  try {
    for (;;) {
      json queueData = co_await ec.recvPacketQueueAsync();
      PacketQueue queue(queueData);

      for (auto& packet : queue) {
        invokeEvent(ec, packet);
      }
    }
  } catch (const boost::system::system_error& e) {
    if (e.code() == boost::asio::error::eof)
      std::println("Client {} disconnected.", ec.getAddress().to_string());
    else
      std::println("Boost system error: {} [{}]", e.what(), e.code().message());
  } catch (const std::exception& e) {
    std::println("Connection error: {}", e.what());
  }
}


} // namespace flux::net::event
