#pragma once

#include <net/event/context.h>
#include <nlohmann/json.hpp>
#include <print>

using namespace boost;

namespace flux::net::event {
class EventHandler {
 public:
  asio::awaitable<void> handle(EventContext ec) {
    try {
      for (;;) {
        nlohmann::json queue = co_await ec.recvPacketQueueAsync();
        std::print("{}\n", queue.dump(2));
      }
    } catch (const std::exception& e) {
      std::print("Connection closed or error: {}\n", e.what());
    }
  }
};
} // namespace flux::net::event