/*
** EPITECH PROJECT, 2020
** SickKoalaList
** File description:
** SickKoalaList
*/

#ifndef SickKoalaList_Ex05
#define SickKoalaList_Ex05

#include "SickKoala.hpp"
#include <list>

class SickKoalaList {
	public:
		SickKoalaList(SickKoala *koala);
		~SickKoalaList();
        bool isEnd();
		void append(SickKoalaList *newNode);
		SickKoala *getFromName(std::string koalaName);
		SickKoalaList *remove(SickKoalaList *toRemove);
		SickKoalaList *removeFromName(std::string koalaName);
		SickKoala *getContent();
		SickKoalaList *getNext();
		void dump();
	protected:
	private:
	SickKoala *m_koala;
    SickKoalaList *next;
};

#endif /* !SickKoalaList_Ex05 */
