#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <SFML/Graphics.hpp>

/*
To add functionality to the game, create a new Class for every feature,
for example for PlayerMovement. This class has to extend from this one and it has to override
the draw and update methods. For the constructor of your component, add sf::RenderWindow &window as first argument,
and then call the Constructor of this class, like this:

MyScript(sf::RenderWindow &window, someOtherArguments) : Component(window)
{
}

In the game class, just create one or more objects of your component(s) and in the mainloop,
call the update and draw methods of the scripts.

To access the current sf::RenderWindow, just use m_window inside the update or draw method ;-)

*/

// abstract class for components
class Component
{
public:
    Component(sf::RenderWindow& window)
        : m_window(window) {
        // EMPTY
    };

    Component() = delete;

    virtual ~Component() = default;
    virtual void draw() = 0;
    virtual void update() = 0;

protected:
    sf::RenderWindow& m_window;
};

#endif