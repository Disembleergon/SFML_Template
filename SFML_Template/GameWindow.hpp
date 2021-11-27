#pragma once
#include <SFML/Graphics.hpp>

class GameWindow
{
  public:
    GameWindow(unsigned int w, unsigned int h, const sf::String &title);
    void run();

  private:
    sf::RenderWindow m_window;
    void handleEvents();
};
