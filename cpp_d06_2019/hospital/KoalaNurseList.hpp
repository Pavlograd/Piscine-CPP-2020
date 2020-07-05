/*
** EPITECH PROJECT, 2020
** KoalaNurseList
** File description:
** KoalaNurseList
*/

#ifndef KoalaNurseList_Ex05
#define KoalaNurseList_Ex05

#include "KoalaNurse.hpp"
#include <list>

class KoalaNurseList {
	public:
		KoalaNurseList(KoalaNurse *koala);
		~KoalaNurseList();
        bool isEnd();
		void append(KoalaNurseList *newNode);
		KoalaNurse *getFromID(int koalaName);
		KoalaNurseList *remove(KoalaNurseList *toRemove);
		KoalaNurseList *removeFromID(int koalaName);
		void dump();
	protected:
	private:
	KoalaNurse *m_koala;
    KoalaNurseList *next;
};

#endif /* !KoalaNurseList_Ex05 */
