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

class Button {
    public:
        //Constructors n Destructors
        Button();
        Button(const char *id);

        ~Button();

        //Methods
        void Update();
        void Draw();

        //Attributes
        const char *id;
        sf::Text text;
        sf::RectangleShape rect;
};

class Menu {
    public:
        //Constructors n Destructors
        Menu();
        Menu(const char *id);

        ~Menu();

        //Methods
        void Update();
        void Draw();

        //Attributes
        const char *id;
        std::vector<sf::Text> texts;
};
