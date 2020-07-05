/*
** EPITECH PROJECT, 2020
** cpp_rush3
** File description:
** cpp_rush3
*/

#include "open_window.hpp"
#include "init.hpp"

int main(int ac, char **av)
{
    if (ac != 2) {
        std::cerr << "Usage: ./MyGKrellm -replace_by -> (-text, -graphic)" << '\n';
        return (84);
    }
    if (strcmp(av[1], "-text") == 0) {
        open_window();
    } else if (strcmp(av[1], "-graphic") == 0)
        display_window();
    else {
        std::cerr << "Usage: ./MyGKrellm -replace_by -> (-text, -graphic)" << '\n';
        return 84;
    }
    
    return (0);
}
