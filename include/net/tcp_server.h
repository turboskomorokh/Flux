#pragma once

#include <boost/asio/io_context.hpp>
#include <boost/asio/ip/tcp.hpp>
#include "net/event/handler.h"

namespace flux {

class TcpServer {
  void accept();

  boost::asio::ip::tcp::acceptor acceptor_;
  net::event::EventHandler eventHandler_;

 public:
  TcpServer(boost::asio::io_context& context,
            net::event::EventHandler eventHandler);
};
} // namespace flux