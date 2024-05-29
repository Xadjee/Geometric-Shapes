#include <SFML/Graphics.hpp>
#include "geometricshapes.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Geometric Shapes");
    window.setFramerateLimit(60);

    Rectangle rect(sf::Vector2f(200, 100), sf::Vector2f(100, 100));
    rect.setColor(sf::Color::Green);
    rect.setOutlineThickness(2.0f);

    Circle circle(50.0f, sf::Vector2f(400, 300));
    circle.setColor(sf::Color::Blue);

    circle.setOutlineThickness(2.0f);

    Triangle triangle(sf::Vector2f(100, 500), sf::Vector2f(300, 500), sf::Vector2f(200, 400));
    triangle.setColor(sf::Color::Red);
    triangle.setOutlineThickness(2.0f);

    while (window.isOpen())
    {
        sf::Event event{};
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        window.clear();
        rect.draw(window);
        circle.draw(window);
        triangle.draw(window);
        window.display();
    }

    return 0;
}
