#include <boost/asio/buffer.hpp>
#include <boost/asio/co_spawn.hpp>
#include <boost/asio/detached.hpp>
#include <boost/asio/registered_buffer.hpp>
#include <boost/system/detail/error_code.hpp>
#include <bsoncxx/json.hpp>
#include <iostream>
#include <net/tcp_server.h>
#include <nlohmann/json.hpp>
#include <nlohmann/json_fwd.hpp>

using namespace boost;

namespace flux::net {

void TcpServer::accept() {
  acceptor_.async_accept(context_, [this](const system::error_code &ec,
                                          asio::ip::tcp::socket socket) {
    if (!ec) {
      try {
        asio::co_spawn(
            socket.get_executor(),
            [this, socket = std::move(socket)]() mutable {
            },
            asio::detached);
      } catch (const std::exception &e) {
        std::cerr << "Handler crashed, exception: " << e.what() << std::endl;
      }
    } else {
      std::cerr << "Error accepting connection: " << ec.message() << std::endl;
    }

    // Continue accepting connections
    accept();
  });
}

TcpServer::TcpServer(asio::io_context &context,
                     event::EventHandler &eventHandler)
    : acceptor_(context, asio::ip::tcp::endpoint(asio::ip::tcp::v4(), 10001)),
      context_(context), eventHandler_(eventHandler) {
  accept();
}

} // namespace flux::net