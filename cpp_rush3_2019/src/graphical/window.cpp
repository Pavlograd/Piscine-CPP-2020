/*
** EPITECH PROJECT, 2020
** cpp_rush3
** File description:
** cpp_rush3
*/

#include "init.hpp"

Window::Window() : window(sf::VideoMode(1000, 800), "OurHTOP")
{
    if (!font.loadFromFile("./src/graphical/arial.ttf"))
        exit (84);
    font.loadFromFile("./src/graphical/arial.ttf");
    text.setFont(font);
}

Window::~Window()
{
}

int display_window(void)
{
    Window *dispWindow = new Window();
    dispWindow->window.setFramerateLimit(24);
    while (dispWindow->window.isOpen()) {
        while (dispWindow->window.pollEvent(dispWindow->event)) {
            if (dispWindow->event.type == sf::Event::Closed)
                dispWindow->window.close();
        }
        dispWindow->window.clear(sf::Color(140, 140, 140));
        initArea(dispWindow);
        dispUser(dispWindow);
        dispTime(dispWindow);
        dispOS(dispWindow);
        dispWindow->window.display();
    }
    return 0;
}
