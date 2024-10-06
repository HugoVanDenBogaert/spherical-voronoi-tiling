#include <SFML/Graphics.hpp>
#include "Point/Point.hpp"
#include <iostream>

int main()
{
    auto window = sf::RenderWindow{ { 192u, 108u }, "CMake SFML Project" };
    window.setFramerateLimit(144);
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color(100, 250, 50));
    Point P1(1.0f, 0.0f, 0.0f);
    Point P2(0.0f, 1.0f, 0.0f);
    std::cout << P2.cross(P1).getPos() << std::endl;

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        window.draw(shape);
        window.display();
    }
}
