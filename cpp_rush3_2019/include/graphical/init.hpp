/*
** EPITECH PROJECT, 2020
** cpp_rush3
** File description:
** cpp_rush3
*/

#ifndef __INIT_HPP__
# define __INIT_HPP__

# include <string>
# include <iostream>
# include <iomanip>
# include <fstream>
# include <iostream>
# include "CPU.hpp"
# include "Date.hpp"
# include "User.hpp"
# include "System.hpp"
# include "RAM.hpp"
# include "UpTime.hpp"
# include <SFML/Graphics.hpp>

class Window
{
    public:
        Window();
        ~Window();
        sf::RenderWindow window;
        sf::Event event;
        sf::Clock clock;
        sf::Time time;
        sf::Font font;
        sf::Text text;
    private:
    protected:
};

void displayWindow();
void initArea(Window *my_window);
void dispUser(Window *my_window);
void dispTime(Window *my_window);
void dispOS(Window *my_window);
int display_window(void);

#endif