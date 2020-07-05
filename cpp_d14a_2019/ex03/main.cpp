/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include <stdexcept>

int main()
{
    try
    {
        SimplePtr regulator(new AtmosphereRegulator);
        SimplePtr reclaimer(new WaterReclaimer);
        // The  code  above  shouldn't be  changed.
        throw std::runtime_error("An error  occured  here!");
    }
    catch (...)
    {
    }
    return 0;
}