/*
** EPITECH PROJECT, 2020
** KoalaDoctorList
** File description:
** KoalaDoctorList
*/

#ifndef KoalaDoctorList_Ex05
#define KoalaDoctorList_Ex05

#include "KoalaDoctor.hpp"
#include <list>

class KoalaDoctorList {
	public:
		KoalaDoctorList(KoalaDoctor *koala);
		~KoalaDoctorList();
        bool isEnd();
		void append(KoalaDoctorList *newNode);
		KoalaDoctor *getFromName(std::string koalaName);
		KoalaDoctorList *remove(KoalaDoctorList *toRemove);
		KoalaDoctorList *removeFromName(std::string koalaName);
		void dump();
	protected:
	private:
	KoalaDoctor *m_koala;
    KoalaDoctorList *next;
};

#endif /* !KoalaDoctorList_Ex05 */
