/*
** EPITECH PROJECT, 2020
** project.c
** File description:
** project
*/

#include "RAM.hpp"

RAM::RAM()
{
    _memoryUse = getMemoryUse();
    _totalMemory = getTotalMemory();
    _percentageMemory = getPercentageMemory();
}

RAM::~RAM()
{
}

std::string RAM::getTotalMemory() const
{
    std::string temp;
    std::string result;
    size_t pos;
    std::ifstream file("/proc/meminfo", std::ios::in);

    if (file)
    {
        std::getline(file, temp);
        pos = temp.find(" ");
        temp.erase(0, pos + 1);
        result = std::to_string(std::stof(temp) / 1000000);
        result.erase(4);
        return (result);
    }
    return ("Can't find RAM");
}

std::string RAM::getMemoryUse() const
{
    std::string temp;
    float result;
    float total;
    size_t pos;

    std::ifstream file("/proc/meminfo", std::ios::in);
    if (file)
    {
        std::getline(file, temp);
        pos = temp.find(" ");
        temp.erase(0, pos + 1);
        total = std::stoi(temp);
        std::getline(file, temp);
        std::getline(file, temp);
        pos = temp.find(" ");
        temp.erase(0, pos + 1);
        result = (total - (std::stof(temp))) / 1000000;
        temp = std::to_string(result);
        temp.erase(4);
        return temp;
    }
    return ("Can't find RAM");
}

int RAM::getPercentageMemory()
{
    _percentageMemory = std::stof(_memoryUse) * 100 / std::stof(_totalMemory);

    return round(_percentageMemory);
}

void RAM::changeInfoSwap()
{
    std::string temp;
    size_t pos = 0;
    std::ifstream file("/proc/swaps", std::ios::in);
    float swap = 0;
    float usage = 0;

    if (file)
    {
        getline(file, temp, char(-1));
        pos = temp.find("partition");
        temp.erase(0, pos + 9);
        _swapSize = std::to_string(std::stof(temp) / 1000000);
        swap = std::stoi(temp);
        pos = temp.find("SwapCached");
        temp.erase(0, pos + 9);
        _swapUsage = std::to_string(std::stof(temp) / 1000000);
        usage = std::stoi(temp);
        _percentageSwap = usage / swap * 100;
    }
}

std::string RAM::getSwapSize()
{
    changeInfoSwap();
    _swapSize.erase(4);
    return _swapSize;
}

std::string RAM::getSwapUsage()
{
    changeInfoSwap();
    _swapUsage.erase(4);
    return _swapUsage;
}

int RAM::getPercentageSwap()
{
    changeInfoSwap();
    return round(_percentageSwap);
}

std::string RAM::getPercentagePrintSwap()
{
    std::ostringstream streamObj3;
    streamObj3 << std::fixed;
    streamObj3 << std::setprecision(1);
    streamObj3 << _percentageSwap;
    return streamObj3.str();
}

std::string RAM::getPercentagePrintMemory()
{
    changeInfoSwap();
    std::ostringstream streamObj3;
    streamObj3 << std::fixed;
    streamObj3 << std::setprecision(1);
    streamObj3 << _percentageMemory;
    return streamObj3.str();
}