/*
** EPITECH PROJECT, 2023
** PixelArt
** File description:
** menu
*/

#include "../../include/menu.hpp"

Menu::Menu() {}

Menu::Menu(const char *id)
{
    this->id = id;
}

Menu::~Menu() {}

void Menu::Update(Game *game)
{
    for (auto &button : this->button_list)
        button.Update(game);
}

void Menu::Draw(sf::RenderTarget &target)
{
    for (auto &button : this->button_list)
        button.Draw(target);
}
