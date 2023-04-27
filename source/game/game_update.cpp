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
    for (auto &menu : this->menu_list)
        menu.Update();
}
