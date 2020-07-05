/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __GIFTPAPER_HPP__
# define __GiftPaper_HPP__

# include <iostream>
# include "Wrap.hpp"

class GiftPaper : public Wrap
{
	public:
		GiftPaper(std::string const &name = "giftpaper", std::string const &type = "giftpaper");
		~GiftPaper();
        void wrapMeThat(Object *object);
	protected:
	private:
};

#endif