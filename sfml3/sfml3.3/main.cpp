#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <cmath>
#include <iostream>

void eye(sf::ConvexShape &oculus, const sf::Vector2f &whiteEyeRadius, const int &pointCount)
{

    oculus.setPointCount(pointCount);
    for (int pointNo = 0; pointNo < pointCount; ++pointNo)
    {
        float angle = float(2 * M_PI * pointNo) / float(pointCount);
        sf::Vector2f point = {
            whiteEyeRadius.x * std::sin(angle),
            whiteEyeRadius.y * std::cos(angle)};
        oculus.setPoint(pointNo, point);
    }
}

void onMouseMove(const sf::Event::MouseMoveEvent &event, sf::Vector2f &mousePosition)
{
    std::cout << "mouse x=" << event.x << ", y=" << event.y << std::endl;
    mousePosition = {float(event.x), float(event.y)};
}

void pollEvents(sf::RenderWindow &window, sf::Vector2f &mousePosition)
{
    sf::Event event;
    while (window.pollEvent(event))
    {
        switch (event.type)
        {
        case sf::Event::Closed:
            window.close();
            break;
        case sf::Event::MouseMoved:
            onMouseMove(event.mouseMove, mousePosition);
            break;
        default:
            break;
        }
    }
}

float toDegrees(float radians)
{
    return float(double(radians) * 180 / M_PI);
}

sf::Vector2f toEuclidean(float angle, const sf::Vector2f &oculusRadius)
{
    return {
        oculusRadius.x * std::sin(angle),
        oculusRadius.y * std::cos(angle)};
}

void update(sf::ConvexShape &oculus, const sf::Vector2f &mousePosition, sf::Vector2f &eyePosition)
{
    const sf::Vector2f delta = mousePosition - eyePosition;
    float angle = atan2(delta.x, delta.y);
    const sf::Vector2f oculusRadius = {15, 30};
    const sf::Vector2f offset = toEuclidean(angle, oculusRadius);
    if (((pow((mousePosition.x - eyePosition.x) / oculusRadius.x, 2) + pow((mousePosition.y - eyePosition.y) / oculusRadius.y, 2)) < 1))
    {
        oculus.setPosition(mousePosition);
    }
    else
    {
        oculus.setPosition(eyePosition + offset);
    }
}

int main()
{
    constexpr int pointCount = 200;
    const sf::Vector2f whiteEyeRadius = {40.f, 75.f};
    const sf::Vector2f eyeRadius = {9.f, 18.f};
    sf::Vector2f eyePositionLeft = {350, 320};
    sf::Vector2f eyePositionRight = {450, 320};

    sf::Vector2f mousePosition;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Eye", sf::Style::Default, settings);

    sf::ConvexShape whiteEyeLeft;
    whiteEyeLeft.setPosition({350, 320});
    whiteEyeLeft.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    eye(whiteEyeLeft, whiteEyeRadius, pointCount);

    sf::ConvexShape whiteEyeRight;
    whiteEyeRight.setPosition({450, 320});
    whiteEyeRight.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    eye(whiteEyeRight, whiteEyeRadius, pointCount);

    sf::ConvexShape eyeLeft;
    eyeLeft.setPosition({330, 320});
    eyeLeft.setFillColor(sf::Color(0x0, 0x0, 0x0));
    eyeLeft.setPointCount(pointCount);
    eye(eyeLeft, eyeRadius, pointCount);

    sf::ConvexShape eyeRight;
    eyeRight.setPosition({430, 320});
    eyeRight.setFillColor(sf::Color(0x0, 0x0, 0x0));
    eyeRight.setPointCount(pointCount);
    eye(eyeRight, eyeRadius, pointCount);

    sf::Clock clock;

    while (window.isOpen())
    {
        const float deltaTime = clock.restart().asSeconds();
        pollEvents(window, mousePosition);
        update(eyeLeft, mousePosition, eyePositionLeft);
        update(eyeRight, mousePosition, eyePositionRight);
        window.clear();
        window.draw(whiteEyeLeft);
        window.draw(whiteEyeRight);
        window.draw(eyeLeft);
        window.draw(eyeRight);
        window.display();
    }
}