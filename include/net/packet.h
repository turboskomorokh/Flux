#pragma once

#include <nlohmann/json.hpp>

namespace flux::net {
  struct PacketBase {
    nlohmann::json data;
  };
}