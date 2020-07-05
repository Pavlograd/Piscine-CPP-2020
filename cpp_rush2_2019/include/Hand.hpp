/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __HAND_HPP__
#define __HAND_HPP__

#include "IConveyorBelt.hpp"

class Hand {
	public:
		Hand();
		~Hand();
        void PressIn(IConveyorBelt *_Conveyor);
        void PressOut(IConveyorBelt *_Conveyor);
		Object *getObject() const;
		void setObject(Object *object);
	protected:
	private:
        Object *_object = nullptr;
};

#endif