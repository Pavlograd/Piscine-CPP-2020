/*
** EPITECH PROJECT, 2020
** Exam
** File description:
** Exam
*/

#ifndef Exam_
#define Exam_

#include <iostream>
#include <string>

class Exam {
	public:
		Exam(bool *cheat);
		~Exam();
        void (Exam:: *kobayashiMaru)(int vessels);
        void start(int vessels);
        bool isCheating();
		static bool cheat;
	protected:
	private:
	bool _cheat;
};

#endif /* !Exam_ */
