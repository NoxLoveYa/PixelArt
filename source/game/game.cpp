/*
** EPITECH PROJECT, 2023
** pixelArt
** File description:
** game
*/

#include "../include/game.hpp"

Game::Game()
{
    this->window = new sf::RenderWindow(sf::VideoMode(1920, 1024), "PixelArt");
}

Game::Game(const char *title)
{
    this->window = new sf::RenderWindow(sf::VideoMode(1920, 1024), title);
}

Game::Game(const char *title, sf::Vector2i size)
{
    this->window = new sf::RenderWindow(sf::VideoMode(size.x, size.y), title);
}

Game::~Game()
{
}

void Game::Run()
{
    while (this->window->isOpen())
    {
        this->window->clear(sf::Color::Black);
        this->HandleEvents();
        this->Update();
        this->Draw();
        this->window->display();
    }
}