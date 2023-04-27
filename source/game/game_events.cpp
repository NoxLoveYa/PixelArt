/*
** EPITECH PROJECT, 2023
** pixelArt
** File description:
** game_events
*/

#include "../include/game.hpp"

void Game::HandleEvents()
{
    sf::Event event;

    while (this->window->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            this->window->close();
    }
}
