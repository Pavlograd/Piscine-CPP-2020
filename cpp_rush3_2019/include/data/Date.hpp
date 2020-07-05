/*
** EPITECH PROJECT, 2020
** Date
** File description:
** Date
*/

#ifndef Date_
#define Date_

#include <iostream>
#include <ctime>
#include <cstring>
#include <string>

class Date
{
public:
	Date();
	~Date();
	void formatDate();
	const std::string &getDate();
	const std::string &getTime();

protected:
private:
	std::string _date;
	std::string _time;
};

#endif /* !Date */