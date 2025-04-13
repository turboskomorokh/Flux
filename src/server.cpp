#include <boost/asio.hpp>
#include <net/tcp_server.h>

int main() {
  boost::asio::io_context ctx;
  flux::net::TcpServer server(ctx);
  ctx.run();
}