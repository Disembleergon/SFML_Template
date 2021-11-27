#include "GameWindow.hpp"
#include "utils/Time.hpp"

GameWindow::GameWindow(unsigned int w, unsigned int h, const sf::String &title) : m_window{sf::VideoMode{w, h}, title}
{
    m_window.setFramerateLimit(60);
    m_window.setVerticalSyncEnabled(true);
}

void GameWindow::handleEvents()
{
    sf::Event event;
    while (m_window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            m_window.close();
    }
}

void GameWindow::run()
{
    while (m_window.isOpen())
    {
        Time::updateDeltaTime();
        handleEvents();

        // update GameScripts here

        m_window.clear();

        // draw GameScripts here

        m_window.display();
    }
}
