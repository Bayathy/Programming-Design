#pragma once
#include "Ball.h"

class BallFactory
{
  public:
  static Ball* create(Ball::TYPE type);
};