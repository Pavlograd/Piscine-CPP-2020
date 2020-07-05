/*
** EPITECH PROJECT, 2020
** Fruit
** File description:
** Fruit
*/

#ifndef Fruit_
#define Fruit_

#include <iostream>

class Fruit {
	public:
		~Fruit();
        Fruit &operator=(const Fruit &copy);
        const std::string &getName() const;
        int getVitamins() const;
	protected:
        int _vitamins;
        std::string _name;
	private:
};

#endif /* !Fruit_ */