#include <net/tcp_server.h>
#include <boost/asio.hpp>

using namespace nlohmann;
using namespace boost;
using namespace flux;
int main() {
  asio::io_context context;
  net::event::EventHandler eh;
  net::TcpServer server(context, eh);
  context.run();
}