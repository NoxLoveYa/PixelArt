/*
** EPITECH PROJECT, 2023
** pixelArt
** File description:
** menu
*/

#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include <vector>

class Game;

class Menu_Color {
    public:
        //Constructors n Destructors
        Menu_Color();
        Menu_Color(sf::Color idle, sf::Color hover, sf::Color active);

        ~Menu_Color();

        //Attributes
        sf::Color idle;
        sf::Color hover;
        sf::Color active;
};

enum button_state {
    BTN_IDLE = 0,
    BTN_HOVER,
    BTN_ACTIVE
};

class Button {
    public:
        //Constructors n Destructors
        Button();
        Button(const char *id);
        Button(const char *id, sf::Vector2f pos, sf::Vector2f size);
        Button(const char *id, sf::Vector2f pos, sf::Vector2f size, Menu_Color color);

        ~Button();

        //Methods
        void Update(Game *game);
        void Draw(sf::RenderTarget &target);

        //Attributes
        const char *id;
        sf::Text text;
        sf::RectangleShape rect;
        enum button_state state;
        Menu_Color colors;
};

class Menu {
    public:
        //Constructors n Destructors
        Menu();
        Menu(const char *id);

        ~Menu();

        //Methods
        void Update(Game *game);
        void Draw(sf::RenderTarget &target);

        //Attributes
        const char *id;
        std::vector<sf::Text> texts;
        std::vector<Button> button_list;
};
