#pragma once

#include <boost/asio/ip/tcp.hpp>
#include <net/event/handler.h>

using namespace boost;

namespace flux::net {

class TcpServer {
public:
  TcpServer(asio::io_context &context);

private:
  void accept();

  asio::ip::tcp::acceptor acceptor_;
  asio::io_context &context_;
};

} // namespace flux::net
