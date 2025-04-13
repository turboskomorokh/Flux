#pragma once

namespace flux::math {
  struct Vector2i {
    int X, Y;
    Vector2i(int x, int y) : X(x), Y(y) {}
  };

  struct Vector2 {
    float X, Y;
    Vector2(float x, float y) : X(x), Y(y) {}
  };
}