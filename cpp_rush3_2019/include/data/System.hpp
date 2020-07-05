/*
** EPITECH PROJECT, 2020
** System
** File description:
** System
*/

#ifndef System_
#define System_

#include <iostream>
#include <sys/utsname.h>

class System {
	public:
		System();
		~System();
        const std::string getName() const;
        const std::string getVersion() const;
	protected:
	private:
        std::string _name;
        std::string _version;
};

#endif /* !System */