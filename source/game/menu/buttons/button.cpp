/*
** EPITECH PROJECT, 2023
** PixelArt
** File description:
** button
*/

#include "../../../include/menu.hpp"
#include "../../../include/game.hpp"

Button::Button()
{
    this->rect = sf::RectangleShape(sf::Vector2f(100, 100));
    this->state = BTN_IDLE;
}

Button::Button(const char *id)
{
    this->id = id;
    this->rect = sf::RectangleShape(sf::Vector2f(100, 100));
    this->state = BTN_IDLE;
}

Button::Button(const char *id, sf::Vector2f pos, sf::Vector2f size)
{
    this->id = id;
    this->rect = sf::RectangleShape(size);
    this->rect.setPosition(pos);
    this->state = BTN_IDLE;
}

Button::Button(const char *id, sf::Vector2f pos, sf::Vector2f size, Menu_Color color)
{
    this->id = id;
    this->rect = sf::RectangleShape(size);
    this->rect.setPosition(pos);
    this->colors = color;
    this->state = BTN_IDLE;
}

Button::~Button()
{
}

void Button::Update(Game *game)
{
    if (this->rect.getGlobalBounds().contains(game->mouse_pos)) {
        this->state = BTN_HOVER;
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            this->state = BTN_ACTIVE;
    } else
        this->state = BTN_IDLE;
    switch (this->state) {
        case BTN_IDLE:
            this->rect.setFillColor(this->colors.idle);
            break;
        case BTN_HOVER:
            this->rect.setFillColor(this->colors.hover);
            break;
        case BTN_ACTIVE:
            this->rect.setFillColor(this->colors.active);
            break;
    }
}

void Button::Draw(sf::RenderTarget &target)
{
    target.draw(this->rect);
}
