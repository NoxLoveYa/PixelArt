/*
** EPITECH PROJECT, 2023
** PixelArt
** File description:
** button
*/

#include "../../../include/menu.hpp"

Button::Button()
{
    this->rect = sf::RectangleShape(sf::Vector2f(100, 100));
}

Button::Button(const char *id)
{
    this->id = id;
    this->rect = sf::RectangleShape(sf::Vector2f(100, 100));
}

Button::Button(const char *id, sf::Vector2f pos, sf::Vector2f size)
{
    this->id = id;
    this->rect = sf::RectangleShape(size);
    this->rect.setPosition(pos);
}

Button::Button(const char *id, sf::Vector2f pos, sf::Vector2f size, sf::Color color)
{
    this->id = id;
    this->rect = sf::RectangleShape(size);
    this->rect.setPosition(pos);
    this->rect.setFillColor(color);
}

Button::~Button()
{
}

void Button::Update()
{
}

void Button::Draw(sf::RenderTarget &target)
{
    target.draw(this->rect);
}
