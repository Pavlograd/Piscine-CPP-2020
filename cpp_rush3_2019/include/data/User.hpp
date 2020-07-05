/*
** EPITECH PROJECT, 2020
** User
** File description:
** User
*/

#ifndef User_
#define User_

#include <iostream>

class User {
	public:
		User();
		~User();
        const std::string &getUsername() const;
        const std::string &getHostname() const;
	protected:
	private:
        std::string _username;
        std::string _hostname;
};

#endif /* !User */