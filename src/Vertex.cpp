#pragma once
#include "Color.cpp"
#include <iostream>

struct Vertex {
  int x;
  int y;
  Color color;

  Vertex(float xCoord, float yCoord, const Color& c) : x(xCoord), y(yCoord), color(c) {}
};
