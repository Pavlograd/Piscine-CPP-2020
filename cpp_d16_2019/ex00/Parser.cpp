/*
** EPITECH PROJECT, 2020
** Parser
** File description:
** Parser
*/

#include <sstream>
#include "Parser.hpp"

Parser::Parser()
{
}

Parser::~Parser()
{
}

void Parser::evalExpr()
{
    int a = _operands.top();
    _operands.pop();
    int y = _operands.top();
    _operands.pop();
    //std::cout << y << _operators.top() << a << std::endl;
    if (_operators.top() == '+')
        _operands.push(y + a);
    else if (_operators.top() == '-')
        _operands.push(y - a);
    else if (_operators.top() == '*')
        _operands.push(y * a);
    else if (_operators.top() == '/')
        _operands.push(y / a);
    else if (_operators.top() == '%')
        _operands.push(y % a);
    _operators.pop();
}

void Parser::feed(const std::string &str)
{
    std::string operators = "+-/*%";
    std::string greatOperators = "/*%";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isdigit(str[i]))
        {
            std::string number = "";
            while (isdigit(str[i])) {
                number += str[i];
                i++;
            }
            i--;
            _operands.push(std::stoi(number));
        } else if (operators.find(str[i]) != std::string::npos) {
            if (!_operators.empty()) {
                while (_operators.top() != '(' && greatOperators.find(_operators.top()) != std::string::npos)
                    evalExpr();
            }
            _operators.push(str[i]);
        } else if (str[i] == '(') {
            _operators.push(str[i]);
        } else if (str[i] == ')') {
            while (_operators.top() != '(')
                evalExpr();
            _operators.pop();
        }
    }
    while (!_operators.empty())
        evalExpr();
    _operators.push('+');
}

int Parser::result() const
{
    return _operands.top();
}

void Parser::reset()
{
    while (!_operators.empty()) {
        _operators.pop();
    }
    while (!_operands.empty()) {
        _operands.pop();
    }
}