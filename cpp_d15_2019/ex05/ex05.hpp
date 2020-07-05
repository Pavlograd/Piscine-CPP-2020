/*
** EPITECH PROJECT, 2020
** ex00
** File description:
** ex00
*/

#ifndef ex00
#define ex00

#include <cstring>
#include <iostream>
#include <string>

template <typename T>
bool equal(const T &A, const T &B);

template <typename T>
class array
{
public:
    array()
    {
        _size = 0;
        Array = new T[_size];
    }
    array(const array<T> &A)
    {
        _size = A.size();
        Array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            Array[i] = A.Array[i];
    }
    ~array()
    {
        if (_size != 0)
            delete (Array);
    }
    array(unsigned int n)
    {
        _size = n;
        Array = new T[_size];
        for (unsigned int i = 0; i < n; i++)
            Array[i] = 0;
    }
    T &operator[](unsigned int A)
    {
        if (A >= _size)
        {
            T *copy_array = new T[A + 1];

            for (unsigned int i = 0; i != _size; i++)
                copy_array[i] = Array[i];
            delete (Array);
            Array = copy_array;
            _size = A + 1;
        }
        return Array[A];
    }
    T &operator[](unsigned int A) const
    {
        if (A >= _size)
            throw std::exception();
        return Array[A];
    }
    const array<T> &operator=(const array<T> &elem)
    {
        if (_size != 0)
            delete (Array);
        _size = elem.size();
        Array = new T[_size];
        for (unsigned int i = 0; i < _size; i++)
            Array[i] = elem.Array[i];
        return *this;
    }
    void dump() const
    {
        if (_size == 0)
        {
            std::cout << "[]" << std::endl;
            return;
        }
        std::cout << "[";
        for (unsigned int i = 0; i < _size - 1; i++)
        {
            std::cout << Array[i] << ", ";
        }
        std::cout << Array[_size - 1];
        std::cout << "]" << std::endl;
    }
    template <typename U>
    array<U> convertTo(U (*convert)(const T &elem))
    {
        array<U> copy(this->_size);
        for (unsigned int i = 0; i < _size; i++)
        {
            copy[i] = (*convert)(Array[i]);
        }
        return copy;
    }
    unsigned int size() const { return _size; }

private:
    unsigned int _size = 0;
    T *Array;
};

template <>
void array<bool>::dump() const
{
    if (_size == 0)
    {
        std::cout << "[]" << std::endl;
        return;
    }
    std::cout << "[";
    for (unsigned int i = 0; i < _size - 1; i++)
    {
        if (Array[i])
            std::cout << "true" << ", ";
        else
            std::cout << "false" << ", ";
    }
    if (Array[_size - 1])
        std::cout << "true";
    else
        std::cout << "false";
    std::cout << "]" << std::endl;
}

#endif /* !ex00 */