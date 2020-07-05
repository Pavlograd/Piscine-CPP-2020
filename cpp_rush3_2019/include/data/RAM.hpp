/*
** EPITECH PROJECT, 2020
** project.c
** File description:
** project
*/

#ifndef DELIVERY_RAM_HPP
#define DELIVERY_RAM_HPP

#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>

class RAM
{
    public:
        RAM();
        ~RAM();
        std::string getMemoryUse() const;
        std::string getTotalMemory() const;
        int getPercentageMemory();
        void changeInfoSwap();
        std::string getSwapSize();
        std::string getSwapUsage();
        int getPercentageSwap();
        std::string getPercentagePrintSwap();
        std::string getPercentagePrintMemory();
    private:
        std::string _memoryUse;
        std::string _totalMemory;
        float _percentageMemory;
        std::string _swapSize;
        std::string _swapUsage;
        float _percentageSwap;
};

#endif //DELIVERY_RAM_HPP