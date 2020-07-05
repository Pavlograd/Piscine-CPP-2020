/*
** EPITECH PROJECT, 2020
** Parser
** File description:
** Parser
*/

#ifndef Parser_
#define Parser_

#include <stack>
#include <iostream>

class Parser
{
public:
	Parser();
	~Parser();
	void feed(const std::string &);
	int result() const;
	void reset();
	void evalExpr();
protected:
private:
	std::stack<char> _operators;
	std::stack<int> _operands;
	int _result = 0;
};

#endif /* !Parser_ */