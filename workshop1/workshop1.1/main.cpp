#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>

int main()

{

    sf::RenderWindow window(sf::VideoMode({200,200}),"pointer");
    
    sf::ConvexShape pointer;
    pointer.setPointCount(7);
    pointer.setPoint(0,{150,100});
    pointer.setPoint(1,{135,100});
    pointer.setPoint(2,{135,60});
    pointer.setPoint(3,{95,60});
    pointer.setPoint(4,{95,100});
    pointer.setPoint(5,{80,100});
    pointer.setPoint(6,{115,140});
    pointer.setFillColor(sf::Color(255, 255, 0));
    pointer.setOutlineColor(sf::Color(0,0,0));
    pointer.setOutlineThickness(float(2));
    
    while (window.isOpen())
    {
        window.clear(sf::Color(225, 225, 225));
        window.draw(pointer);
        window.display();
    }
}

