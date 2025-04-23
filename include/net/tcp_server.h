#pragma once

#include <boost/asio/io_context.hpp>
#include <boost/asio/ip/tcp.hpp>
#include "net/event/handler.h"

using namespace nlohmann;

namespace flux::net {

class TcpServer {
  void accept();

  asio::ip::tcp::acceptor acceptor_;
  net::event::EventHandler eventHandler_;

 public:
  TcpServer(asio::io_context& context,
            net::event::EventHandler& eventHandler);
};
} // namespace flux