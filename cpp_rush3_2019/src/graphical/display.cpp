/*
** EPITECH PROJECT, 2020
** cpp_rush3
** File description:
** cpp_rush3
*/

#include "init.hpp"

void initArea(Window *my_window)
{
    sf::RectangleShape rectangle1(sf::Vector2f(1000.f, 80.f));
    sf::RectangleShape rectangle2(sf::Vector2f(500.f, 200.f));
    sf::RectangleShape rectangle3(sf::Vector2f(500.f, 200.f));
    rectangle1.setFillColor(sf::Color(0, 128, 0));
    rectangle2.setFillColor(sf::Color(130, 130, 130));
    rectangle3.setFillColor(sf::Color(130, 130, 130));
    rectangle1.setOutlineThickness(-4);
    rectangle2.setOutlineThickness(-3);
    rectangle3.setOutlineThickness(-3);
    rectangle1.setOutlineColor(sf::Color(200, 200, 200));
    rectangle2.setOutlineColor(sf::Color(200, 200, 200));
    rectangle3.setOutlineColor(sf::Color(200, 200, 200));
    rectangle1.setPosition(0.f, 0.f);
    rectangle2.setPosition(0.f, 80.f);
    rectangle3.setPosition(500.f, 80.f);
    my_window->window.draw(rectangle1);
    my_window->window.draw(rectangle2);
    my_window->window.draw(rectangle3);
}

void dispUser(Window *my_window)
{
    User _user;
    my_window->text.setString(_user.getUsername());
    my_window->text.setCharacterSize(15);
    my_window->text.setFillColor(sf::Color::White);
    my_window->text.setPosition(20.f, 5.f);
    my_window->window.draw(my_window->text);
    my_window->text.setString(_user.getHostname());
    my_window->text.setPosition(20.f, 20.f);
    my_window->window.draw(my_window->text);
}

void dispTime(Window *my_window)
{
    Date _date;
    UpTime _up;
    std::string a = "Time : ";
    std::string b = _date.getDate();
    my_window->text.setCharacterSize(15);
    my_window->text.setFillColor(sf::Color::White);
    my_window->text.setString(a + b);
    my_window->text.setPosition(350.f, 5.f);
    my_window->window.draw(my_window->text);
    a = "Date : ";
    b = _date.getTime();
    my_window->text.setString(a + b);
    my_window->text.setPosition(350.f, 20.f);
    my_window->window.draw(my_window->text);
    a = "UpTime : ";
    b = _up.getUpTime();
    my_window->text.setString(a + b);
    my_window->text.setPosition(350.f, 35.f);
    my_window->window.draw(my_window->text);
}

void dispOS(Window *my_window)
{
    System _sys;
    std::string a = "OS : ";
    std::string b = _sys.getName();
    my_window->text.setCharacterSize(15);
    my_window->text.setFillColor(sf::Color::White);
    my_window->text.setString(a + b);
    my_window->text.setPosition(750.f, 5.f);
    my_window->window.draw(my_window->text);
    a = "Kernel : ";
    b = _sys.getVersion();
    my_window->text.setString(a + b);
    my_window->text.setPosition(750.f, 20.f);
    my_window->window.draw(my_window->text);
}