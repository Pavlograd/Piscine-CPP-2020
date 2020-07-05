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
#include <string>

void my_cat(char *file_name)
{
    std::string line;
    std::ifstream myFile(file_name);

    if (!myFile)
        std::cerr << "my_cat: " << file_name << ": " << strerror(errno) << std::endl;
    else {
        while (getline(myFile, line))
            std::cout << line << std::endl;
        myFile.close();
    }
}

int main(int argc, char **argv)
{
    if (argc == 1) {
        std::cerr << "my_cat: Usage: ./my_cat file [...]" << std::endl;
        return 84;
    } else {
        for (int i = 1; i < argc; i++)
            my_cat(argv[i]);
    }
    return 0;
}