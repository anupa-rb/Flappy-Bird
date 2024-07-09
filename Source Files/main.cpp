// #include <SFML/Graphics.hpp>
// #include"headers.h"
// #include"Game.h"

// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(WIN_WIDTH, WIN_HEIGHT), "Flappy Bird");
//     Game game(window);
//     game.startGameLoop();
//     return 0;
// }
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}