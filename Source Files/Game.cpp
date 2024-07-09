#include"Game.h"
// Game::Game(sf::RenderWindow &window): win(window)
// {

// }
void Game::startGameLoop()
{
    //Game Loop
    while(win.isOpen())
    {
        //Event Loop
        sf::Event event;
        while(win.pollEvent(event))
        {
            if(event.type==sf::Event::Closed)
            {
                win.close();
            }
        }
        //display window
        win.display();
    }
}