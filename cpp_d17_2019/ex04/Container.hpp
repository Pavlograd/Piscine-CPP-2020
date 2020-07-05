/*
** EPITECH PROJECT, 2020
** Container
** File description:
** Container
*/

#ifndef Container_
#define Container_

#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <stack>

template <typename T, template <class, class> class TContainer>
class contain
{
public:
    contain() {}
    ~contain() {}
    void push(T const &data);
    void aff();
    void add();

protected:
private:
    TContainer<T, std::allocator<T>> _container;
};
template <typename T, template <class, class> class TContainer>
void contain<T, TContainer>::push(T const &data)
{
    _container.push_back(data);
}
template <>
void contain<int, std::stack>::push(const int &data)
{
    _container.stack::push(data);
    return;
}
template <typename T, template <class, class> class TContainer>
void contain<T, TContainer>::aff()
{
    std::for_each(_container.begin(), _container.end(), [](T i) -> void { std::cout << "Value: " << i << std::endl; });
}
template <>
void contain<int, std::stack>::aff()
{
    while (!_container.empty()) {
        std::cout << "lol" << std::endl;
    }
    return;
}
template <typename T, template <class, class> class TContainer>
void contain<T, TContainer>::add()
{
    std::for_each(_container.begin(), _container.end(), [](T &i) -> void { i++; });
}
template <>
void contain<int, std::stack>::add()
{
    return;
}

#endif /* !Container */