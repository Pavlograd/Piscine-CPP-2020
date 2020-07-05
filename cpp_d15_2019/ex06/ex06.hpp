/*
** EPITECH PROJECT, 2020
** Tuple
** File description:
** Tuple
*/

#ifndef Tuple_
#define Tuple_

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

template <typename T>
const std::string returnType(T)
{
    return "[???]";
}
template <>
const std::string returnType(int i)
{
    return "[int:" + std::to_string(i) + "]";
}
template <>
const std::string returnType(float f)
{
    std::ostringstream stream;
     stream << f;
     std::string str =  stream.str();
    return "[float:" + str + "f]";
}
template <>
const std::string returnType(std::string str)
{
    return "[std::string:\"" + str + "\"]";
}

template <typename T, typename U = T>
class Tuple
{
public:
    T a;
    U b;
    std::string toString() const
    {
        //[TUPLE [int:42] [string:“Karadoc toasted sandwich”]]

        return "[TUPLE " + returnType(a) + " " + returnType(b) + "]";
    }
};

#endif /* !Tuple_ */