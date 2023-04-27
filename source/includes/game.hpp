/*
** EPITECH PROJECT, 2023
** pixelArt
** File description:
** game
*/

#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

class Game {
    public:
        //Constructors n Destructors
        Game();
        Game(const char *title);
        Game(const char *title, sf::Vector2i size);

        ~Game();

        //Methods
        void Run();
        void HandleEvents();
        void Draw();

        //Attributes
        sf::RenderWindow *window;
};
