/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __PAPAXMASTABLE_HPP__
# define __PAPAXMASTABLE_HPP__

# include <iostream>
# include "ITable.hpp"

class PapaXmasTable : public ITable
{
	public:
		PapaXmasTable();
		~PapaXmasTable();
		void put(Object *object);
		Object *take(int place);
		std::string *look();
	private:
		Object *_object;
		Object *_array[11];
};

ITable *createTable();

#endif /* !PAPAXMASTABLE_HPP_ */
