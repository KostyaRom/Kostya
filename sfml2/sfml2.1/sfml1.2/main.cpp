#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "name");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({160, 20});
    shape1.setRotation(90);
    shape1.setPosition({120, 120});
    shape1.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({80, 20});
    shape2.setPosition({120, 120});
    shape2.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({80, 20});
    shape3.setRotation(90);
    shape3.setPosition({200, 120});
    shape3.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({80, 20});
    shape4.setPosition({120, 200});
    shape4.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({90, 20});
    shape5.setRotation(45);
    shape5.setPosition({120, 200});
    shape5.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({160, 20});
    shape6.setRotation(90);
    shape6.setPosition({250, 120});
    shape6.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({90, 20});
    shape7.setRotation(45);
    shape7.setPosition({250, 200});
    shape7.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({90, 20});
    shape8.setRotation(135);
    shape8.setPosition({310, 140});
    shape8.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({60, 20});
    shape9.setPosition({340, 120});
    shape9.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({80, 20});
    shape10.setRotation(90);
    shape10.setPosition({340, 120});
    shape10.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape10);

    sf::RectangleShape shape11;
    shape11.setSize({60, 20});
    shape11.setPosition({340, 180});
    shape11.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape11);

    sf::RectangleShape shape12;
    shape12.setSize({80, 20});
    shape12.setRotation(90);
    shape12.setPosition({400, 180});
    shape12.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape12);

    sf::RectangleShape shape13;
    shape13.setSize({80, 20});
    shape13.setPosition({320, 240});
    shape13.setFillColor(sf::Color(0xFF, 0x0, 0x0));
    window.draw(shape13);

    window.display();

    sf::sleep(sf::seconds(5));
}