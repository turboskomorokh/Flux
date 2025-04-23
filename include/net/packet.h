#pragma once

#include <net/protocol/msg.h>
#include <nlohmann/json.hpp>

using namespace nlohmann;

namespace flux::net {
class PacketBase {
  json data;

 public:
  PacketBase() = default;
  explicit PacketBase(const json& j) : data(j) {}
  explicit PacketBase(const PacketBase& packet) : data(packet.data) {}

  virtual ~PacketBase() = default;

  virtual void from(const json& j) { data = j; }
  virtual void from(const PacketBase& packet) { data = packet.data; }

  virtual std::string getID() const { return data[protocol::ID_KEY]; }
  virtual json getData() const { return data; }
};

class PacketQueue {
 public:
  explicit PacketQueue(json& queue) {
    size_t count = queue.value("mc", 0);
    packets_.reserve(count);
    for (size_t i = 0; i < count; ++i) {
      std::string key = "m" + std::to_string(i);
      if (queue.contains(key)) {
        packets_.emplace_back(PacketBase(queue[key]));
      }
    }
  }

  auto begin() { return packets_.begin(); }
  auto end() { return packets_.end(); }

 private:
  std::vector<PacketBase> packets_;
};
} // namespace flux::net