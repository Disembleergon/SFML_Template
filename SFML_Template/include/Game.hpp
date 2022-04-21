#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>

class Game
{
  public:
    Game(unsigned int w, unsigned int h, const sf::String &title);
    void run();

  private:
    sf::RenderWindow m_window;
    void handleEvents();
};

#endif
