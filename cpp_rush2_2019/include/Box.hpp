/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __BOX_HPP__
# define __BOX_HPP__

# include <iostream>
# include "Wrap.hpp"

class Box : public Wrap
{
	public:
		Box(std::string const &name = "box", std::string const &type = "box");
		~Box();
        void wrapMeThat(Object *object);
	protected:
	private:
};

#endif
