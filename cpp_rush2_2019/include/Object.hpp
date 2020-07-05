/*
** EPITECH PROJECT, 2020
** cpp_rush2
** File description:
** cpp_rush2
*/

#ifndef __OBJECT_HPP__
# define __OBJECT_HPP__

# include <iostream>

class Object
{
    public:
        Object(std::string const &name, std::string const &type);
        virtual ~Object(void);
        const std::string &getType() const;
        const std::string &getName() const;
        virtual void isTaken() const = 0;
    protected:
        const std::string _name;
        const std::string _type;
};

std::ostream &operator<<(std::ostream &os, const Object &obj);

#endif