/*
** EPITECH PROJECT, 2023
** PixelArt
** File description:
** menu_color
*/

#include "../../include/menu.hpp"

Menu_Color::Menu_Color()
{
    this->idle = sf::Color::White;
    this->hover = sf::Color::Red;
    this->active = sf::Color::Green;
}

Menu_Color::Menu_Color(sf::Color idle, sf::Color hover, sf::Color active)
{
    this->idle = idle;
    this->hover = hover;
    this->active = active;
}

Menu_Color::~Menu_Color()
{
}
