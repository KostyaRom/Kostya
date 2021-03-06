#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({45, 270}), "three color");

    window.clear();

    sf::CircleShape shape1(40);
    shape1.setPosition({10, 10});
    shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape1);

    sf::CircleShape shape2(40);
    shape2.setPosition({10, 95});
    shape2.setFillColor(sf::Color(0xFF, 0xFF, 0x0));
    window.draw(shape2);

    sf::CircleShape shape3(40);
    shape3.setPosition({10, 180});
    shape3.setFillColor(sf::Color(0x0, 0xFF, 0x0));
    window.draw(shape3);

    window.display();

    sf::sleep(sf::seconds(5));
}