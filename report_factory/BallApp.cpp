#include "BallApp.h"
#include "Rand.h"
#include "Ball.h"
#include "BallFactory.h"

BallApp::BallApp()
{
  setKeyboardListener(this);
  setMouseListener(this);
}

BallApp::~BallApp()
{
}

void BallApp::init()
{
  balls.resize(100);

  for (auto &b : balls)
  {
    int r = Rand::range(0, 9); // 0〜9の乱数
    if (r < 1)
      b = BallFactory::create(Ball::TYPE::BasketBall);
    else if (r < 4)
      b = BallFactory::create(Ball::TYPE::TennisBall);
    else
      b = BallFactory::create(Ball::TYPE::BaseBall);

    b->init();
  }
}

void BallApp::update()
{
  for (auto &b : balls)
    b->update();
}

void BallApp::draw()
{
  window.clear(sf::Color::White);

  for (auto &b : balls)
    b->draw();

  window.display();
}

void BallApp::clean()
{
  for (auto &b : balls)
  {
    b->clean();
    delete b;
  }
}

void BallApp::onKeyDown(sf::Keyboard::Key key)
{
  if (key == sf::Keyboard::Escape)
    window.close();
}

void BallApp::onMouseMoved(sf::Event::MouseMoveEvent mouse)
{
}

void BallApp::onClick(sf::Event::MouseButtonEvent mouse)
{
}

void BallApp::offClick(sf::Event::MouseButtonEvent mouse)
{
}
