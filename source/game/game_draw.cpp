/*
** EPITECH PROJECT, 2023
** pixelArt
** File description:
** game_draw
*/

#include "../include/game.hpp"

void Game::Draw()
{
    for (auto &menu : this->menu_list)
        menu.Draw(*this->window);
}