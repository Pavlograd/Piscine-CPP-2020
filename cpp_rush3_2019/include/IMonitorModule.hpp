/*
** EPITECH PROJECT, 2020
** cpp_rush3
** File description:
** cpp_rush3
*/

#ifndef __IMONITORMODULE_HPP__
# define __IMONITORMODULE_HPP__

# include <iostream>

class IMonitorModule
{
    public:
        IMonitorModule();
        virtual ~IMonitorModule();
        virtual void refresh() = 0;
};

#endif