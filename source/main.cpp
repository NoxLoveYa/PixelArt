/*
** EPITECH PROJECT, 2023
** pixelArt
** File description:
** main
*/

#include "include/game.hpp"
#include "include/menu.hpp"

int main(void)
{
    Game game("Pixel Art By Nox");
    game.menu_list.push_back(Menu("main_menu"));
    game.menu_list[0].button_list.push_back(Button("play", sf::Vector2f(1920/2 - 375, 100), sf::Vector2f(750, 750), sf::Color::Magenta));
    game.Run();
    return 0;
}
