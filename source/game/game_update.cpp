/*
** EPITECH PROJECT, 2023
** PixelArt
** File description:
** game_update
*/

#include "../include/game.hpp"
#include "../include/menu.hpp"

void Game::Update()
{
    this->mouse_pos = sf::Vector2f(sf::Mouse::getPosition(*this->window));
    for (auto &menu : this->menu_list)
        menu.Update(this);
}
