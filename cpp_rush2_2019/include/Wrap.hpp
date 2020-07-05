/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __WRAP_HPP__
# define __WRAP_HPP__

# include <iostream>
# include "Object.hpp"

class Wrap : public Object
{
	public:
        enum WrapStatus
        {
            OPEN,
            CLOSE
        };
        Wrap(std::string const &name = "wrap", std::string const &type = "wrap");
		virtual ~Wrap();
        virtual void wrapMeThat(Object *object) = 0;
        void openMe();
        void closeMe();
        Object *getObject() const;
        void isTaken() const;
	protected:
        WrapStatus _Status = OPEN;
        Object *_Object = nullptr;
	private:
};

Object *MyUnitTests(Object **);

#endif