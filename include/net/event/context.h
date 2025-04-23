#pragma once

#include <boost/asio.hpp>
#include <net/packet.h>
#include <boost/asio/ip/address.hpp>
#include <nlohmann/json.hpp>

using namespace boost;

namespace flux::net::event {

class EventContext {
 public:
  asio::ip::tcp::socket socket;

  EventContext(boost::asio::ip::tcp::socket socket);

  asio::ip::address getAddress();  
  asio::awaitable<void> sendPacketAsync(PacketBase& packet);
  asio::awaitable<nlohmann::json> recvPacketQueueAsync();
};

} // namespace flux::net::event
