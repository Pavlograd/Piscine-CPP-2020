/*
** EPITECH PROJECT, 2020
** KoalaAction
** File description:
** KoalaAction
*/

#ifndef KoalaAction_
#define KoalaAction_

#include <iostream>

class KoalaAction {
	public:
		KoalaAction() {}
		~KoalaAction() {}
        void eat(const std::string &str)
        {
            std::cout << "I eat to: " << str << std::endl;
        }
        void goTo(const std::string &str)
        {
            std::cout << "I go to: " << str << std::endl;
        }
        void sleep(const std::string &str)
        {
            std::cout << "I sleep: " << str << std::endl;
        }
        void reproduce(const std::string &str)
        {
            std::cout << "I reproduce with: " << str << std::endl;
        }
	protected:
	private:
};

#endif /* !KoalaAction_ */