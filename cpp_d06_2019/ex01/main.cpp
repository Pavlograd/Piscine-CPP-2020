/*
** EPITECH PROJECT, 2020
** my_cat
** File description:
** main.cpp
*/

#include <iostream>
#include <fstream>
#include <cerrno>
#include <cstring>
#include <sstream>
#include <string>
#include <iomanip>

void my_convert_temp(float temperature, std::string scale)
{
    float result;

    if ((scale.compare("Celsius")) == 0) {
        result = ( 9.0 / 5.0 ) * ( temperature ) + 32;
        std::cout << std::setw(16) << std::setprecision (3) << std::fixed << result << std::setw(16) << "Fahrenheit" << std::endl;
    } else if ((scale.compare("Fahrenheit")) == 0) {
        result = 5.0 / 9.0 * ( temperature  - 32 );
        std::cout << std::setw(16) << std::setprecision (3) << std::fixed << result << std::setw(16) << "Celsius" << std::endl;
    } else
        return;
}

void readData(std::istream &in)
{
    std::string line;
    std::stringstream ss;
    std::string scale;
    float temperature;

    if (!in) {
        std::cerr << strerror(errno) << std::endl;
        return;
    }
    getline(in, line);
    ss << line;
    ss >> temperature;
    ss >> scale;
    if (scale.empty())
        return;
    my_convert_temp(temperature, scale);
}

int main()
{
    readData(std::cin);
    return 0;
}