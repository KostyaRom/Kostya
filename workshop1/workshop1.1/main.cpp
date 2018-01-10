#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>

int main()
{
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window(sf::VideoMode({200, 300}), "Arrow");
    window.clear(sf::Color(255, 255, 255));

    sf::ConvexShape arrow;
    arrow.setFillColor(sf::Color(255, 255, 0));
    arrow.setOutlineThickness(3);
    arrow.setOutlineColor(sf::Color(0, 0, 0));
    arrow.setPosition(100, 100);
    arrow.setPointCount(7);
    arrow.setPoint(0, {0, -50});
    arrow.setPoint(1, {50, 0});
    arrow.setPoint(2, {30, 0});
    arrow.setPoint(3, {30, 50});
    arrow.setPoint(4, {-30, 50});
    arrow.setPoint(5, {-30, 0});
    arrow.setPoint(6, {-50, 0});
    window.draw(arrow);
    window.display();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
    }
}