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

void Menu::Update()
{

}

void Menu::Draw(sf::RenderTarget &target)
{
    for (auto &button : this->button_list)
        button.Draw(target);
}
