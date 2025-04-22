#include <boost/asio/awaitable.hpp>
#include <boost/asio/co_spawn.hpp>
#include <boost/system/detail/error_code.hpp>
#include <boost/asio.hpp>

#include <net/tcp_server.h>

#include <array>
#include <print>
#include "net/event/handler.h"

using namespace boost;

namespace flux {
void TcpServer::accept() {
  acceptor_.async_accept([this](std::error_code ec,
                                asio::ip::tcp::socket socket) {
    if (!ec) {
      auto ctx = std::make_shared<net::event::EventContext>(std::move(socket));
      asio::co_spawn(
          acceptor_.get_executor(), eventHandler_.handle(std::move(*ctx)), asio::detached);
    }
    accept();
  });
}

TcpServer::TcpServer(boost::asio::io_context& context,
                     net::event::EventHandler eventHandler)
    : acceptor_(
          context,
          boost::asio::ip::tcp::endpoint(boost::asio::ip::tcp::v4(), 10001)),
      eventHandler_(eventHandler) {
  accept();
}
} // namespace flux