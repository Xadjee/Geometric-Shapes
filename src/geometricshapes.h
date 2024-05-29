#include <SFML/Graphics.hpp>

// Базовый класс для геометрических фигур
class GeometricShape
{
protected:
    sf::Color color;
    float outlineThickness;

public:
    virtual void draw(sf::RenderWindow& window) = 0;
    virtual ~GeometricShape() = default;

    void setColor(const sf::Color& newColor)
    {
        color = newColor;
    }

    void setOutlineThickness(float thickness)
    {
        outlineThickness = thickness;
    }
};

// Производный класс для рисования прямоугольника
class Rectangle : public GeometricShape
{
private:
    sf::Vector2f size;
    sf::Vector2f position;

public:
    Rectangle(const sf::Vector2f& size, const sf::Vector2f& position) : size(size), position(position)
    {
        color = sf::Color::White;
        outlineThickness = 1.0f;
    }

    void draw(sf::RenderWindow& window) override;
};

// Производный класс для рисования окружности
class Circle : public GeometricShape
{
private:
    float radius;
    sf::Vector2f position;

public:
    Circle(float radius, const sf::Vector2f& position) : radius(radius), position(position)
    {
        color = sf::Color::White;
        outlineThickness = 1.0f;
    }

    void draw(sf::RenderWindow& window) override;
};

// Производный класс для рисования треугольника
class Triangle : public GeometricShape
{
private:
    sf::Vector2f vertex1;
    sf::Vector2f vertex2;
    sf::Vector2f vertex3;

public:
    Triangle(const sf::Vector2f& v1, const sf::Vector2f& v2, const sf::Vector2f& v3)
        : vertex1(v1), vertex2(v2), vertex3(v3)
    {
        color = sf::Color::White;
        outlineThickness = 1.0f;
    }

    void draw(sf::RenderWindow& window) override;
};
