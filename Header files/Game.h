#include <SFML/Graphics.hpp>

class Game
{
public:
    Game(sf::RenderWindow &window);
    sf::RenderWindow win;
    void startGameLoop();
};