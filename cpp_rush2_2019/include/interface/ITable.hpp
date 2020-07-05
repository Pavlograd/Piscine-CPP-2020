/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __ITABLE_HPP__
#define __ITABLE_HPP__

#include <iostream>
#include "Object.hpp"

class ITable
{
	public:
		virtual ~ITable() {};
		virtual void put(Object *object) = 0;
        virtual Object *take(int place) = 0;
		virtual std::string *look() = 0;
};

#endif