#pragma once
#include "Ball.h"

class BallFactory
{
  static Ball *create(Ball::TYPE type);
}