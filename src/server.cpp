#include <net/tcp_server.h>
#include <boost/asio.hpp>

int main() {
  boost::asio::io_context context;
  flux::net::event::EventHandler eh;
  flux::TcpServer server(context, eh);
  context.run();
}