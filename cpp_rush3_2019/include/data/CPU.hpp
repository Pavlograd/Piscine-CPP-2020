/*
** EPITECH PROJECT, 2020
** project.c
** File description:
** project
*/

#ifndef DELIVERY_CPU_HPP
#define DELIVERY_CPU_HPP

#include <iostream>
#include <fstream>
#include <thread>
#include <string.h>
#include <vector>
#include <chrono>
#include <sstream>
#include <string>

class Core
{
public:
    Core() {};
    ~Core() {};
    enum Stats
    {
        USER,
        NICE,
        SYSTEM,
        IDLE,
        IOWAIT,
        IRQ,
        SOFTIRQ,
        STEAL,
        GUEST,
        GUEST_NICE
    };
    unsigned int Values[10];
    unsigned int getPrevIdle();
    unsigned int getIdle();


protected:
private:
    unsigned int prev_idle;
    unsigned int idle;
};

class CPU
{
    public:
        CPU();
        ~CPU();
        int getNbHeart();
        std::string getProcsRunning();
        void ReadStatsCore();
        std::string PrintCore(int i);
        void setShift();
        std::vector<Core> _core1;
        std::vector<Core> _core2;
        std::string getFrequency();

    private:
        int _nbHeart;
        std::string _procsRun;
        int shift = 0;
        std::string _frequency;
};

#endif //DELIVERY_CPU_HPP