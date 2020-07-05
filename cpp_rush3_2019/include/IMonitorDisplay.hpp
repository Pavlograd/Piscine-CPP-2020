/*
** EPITECH PROJECT, 2020
** cpp_rush3
** File description:
** cpp_rush3
*/

#ifndef __IMONITORDISPLAY_HPP__
# define __IMONITORDISPLAY_HPP__

# include <iostream>

class IMonitorDisplay
{
    public:
        IMonitorDisplay();
        virtual ~IMonitorDisplay();
        virtual void refresh() = 0;
};

#endif