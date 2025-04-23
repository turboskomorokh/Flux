#pragma once

#include <net/event/context.h>
#include <nlohmann/json.hpp>

using namespace boost;

namespace flux::net::event {

class EventHandler {
  asio::awaitable<void> invokeEvent(EventContext& ec, PacketBase& packet);
 public:
  asio::awaitable<void> handle(EventContext ec);
};

} // namespace flux::net::event
