#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "House");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({20, 40});
    shape1.setPosition({270, 180});
    shape1.setFillColor(sf::Color(105, 105, 105));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({300, 180});
    shape2.setPosition({100, 280});
    shape2.setFillColor(sf::Color(128, 128, 0));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({60, 120});
    shape3.setPosition({130, 340});
    shape3.setFillColor(sf::Color(105, 105, 105));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({40, 20});
    shape4.setPosition({260, 160});
    shape4.setFillColor(sf::Color(105, 105, 105));
    window.draw(shape4);

    sf::CircleShape shape5(10);
    shape5.setPosition({270, 140});
    shape5.setFillColor(sf::Color(169, 169, 169));
    window.draw(shape5);

    sf::CircleShape shape6(13);
    shape6.setPosition({275, 128});
    shape6.setFillColor(sf::Color(169, 169, 169));
    window.draw(shape6);

    sf::CircleShape shape7(14);
    shape7.setPosition({278, 122});
    shape7.setFillColor(sf::Color(169, 169, 169));
    window.draw(shape7);

    sf::ConvexShape shape8;
    shape8.setFillColor(sf::Color(139, 0, 0));
    shape8.setPosition({250, 200});
    shape8.setPointCount(4);
    shape8.setPoint(0, {-80, 0});
    shape8.setPoint(1, {+80, 0});
    shape8.setPoint(2, {+200, 80});
    shape8.setPoint(3, {-200, 80});
    window.draw(shape8);

    window.display();

    sf::sleep(sf::seconds(5));
}
