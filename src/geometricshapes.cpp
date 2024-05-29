#include "geometricshapes.h"

void Rectangle::draw(sf::RenderWindow& window)
{
    sf::RectangleShape rect(size);
    rect.setPosition(position);
    rect.setFillColor(sf::Color::Transparent);
    rect.setOutlineColor(color);
    rect.setOutlineThickness(outlineThickness);
    window.draw(rect);
}

void Circle::draw(sf::RenderWindow& window)
{
    sf::CircleShape circle(radius);
    circle.setPosition(position);
    circle.setFillColor(sf::Color::Transparent);
    circle.setOutlineColor(color);
    circle.setOutlineThickness(outlineThickness);
    window.draw(circle);
}

void Triangle::draw(sf::RenderWindow& window)
{
    sf::ConvexShape triangle(3);
    triangle.setPoint(0, vertex1);
    triangle.setPoint(1, vertex2);
    triangle.setPoint(2, vertex3);
    triangle.setFillColor(sf::Color::Transparent);
    triangle.setOutlineColor(color);
    triangle.setOutlineThickness(outlineThickness);
    window.draw(triangle);
}
