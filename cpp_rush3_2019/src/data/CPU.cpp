/*
** EPITECH PROJECT, 2020
** project.c
** File description:
** project
*/

#include <stdlib.h>
#include "CPU.hpp"

CPU::CPU()
{
    _nbHeart = getNbHeart();
    _procsRun = getProcsRunning();
    _frequency = getFrequency();
}

CPU::~CPU()
{
}

int CPU::getNbHeart()
{
    _nbHeart = std::thread::hardware_concurrency();

    return (_nbHeart);
}

std::string CPU::getProcsRunning()
{
    std::string buffer;
    std::string line;
    std::ifstream file("/proc/stat", std::ios::in);
    char buffer_return[1000];
    char buffer_strncmp[100000];
    int i = 0;
    int j = 0;

    if (file)
    {
        while (std::getline(file, line))
        {
            i = 0;
            while (line[i] != '\0')
            {
                buffer_strncmp[i] = line[i];
                i++;
            }
            i--;
            buffer_strncmp[i] = '\0';
            if (strncmp("procs_running", buffer_strncmp, 13) == 0)
            {
                j = 0;
                while (line[i] != '\0')
                {
                    buffer_return[j] = line[i];
                    i++;
                    j++;
                }
                buffer_return[j] = '\0';
            }
        }
    }
    return ((std::string)buffer_return);
}

unsigned int Core::getPrevIdle()
{
    return Values[IDLE] + Values[IOWAIT];
}

unsigned int Core::getIdle()
{
    return Values[USER] + Values[NICE] + Values[SYSTEM] + Values[IRQ] + Values[SOFTIRQ] + Values[STEAL] + Values[GUEST] + Values[GUEST_NICE];
}

void PrintCore(std::vector<Core> &entries1, std::vector<Core> &entries2)
{
    const size_t NUM_ENTRIES = entries1.size();

    for (size_t i = 1; i < NUM_ENTRIES; i++)
    {

        const float ACTIVE_TIME = static_cast<float>(entries2[i].getIdle() - entries1[i].getIdle());
        const float IDLE_TIME = static_cast<float>(entries2[i].getPrevIdle() - entries1[i].getPrevIdle());
        const float TOTAL_TIME = ACTIVE_TIME + IDLE_TIME;

        std::cout.setf(std::ios::fixed, std::ios::floatfield);
        std::cout.precision(1);
        std::cout << i << " : " << (100 * ACTIVE_TIME / TOTAL_TIME) << "%" << std::endl;
    }
}

std::string CPU::PrintCore(int i)
{
    float ACTIVE_TIME;
    float IDLE_TIME;
    std::string tmp = "";


    if (shift == 0) {
        ACTIVE_TIME = static_cast<float>(_core2[i].getIdle() - _core1[i].getIdle());
        IDLE_TIME = static_cast<float>(_core2[i].getPrevIdle() - _core1[i].getPrevIdle());
    } else {
        ACTIVE_TIME = static_cast<float>(_core1[i].getIdle() - _core2[i].getIdle());
        IDLE_TIME = static_cast<float>(_core1[i].getPrevIdle() - _core2[i].getPrevIdle());
    }
    const float TOTAL_TIME = ACTIVE_TIME + IDLE_TIME;
    tmp = std::to_string(100 * ACTIVE_TIME / TOTAL_TIME);
    tmp.erase(4);

    return tmp;
}

void CPU::setShift()
{
    shift = (shift == 0) ? 1 : 0;
}

void CPU::ReadStatsCore()
{
    std::ifstream file("/proc/stat");
    std::string line;
    std::string tmp = "";

    while (std::getline(file, line))
    {
        if (!line.compare(0, 3, "cpu"))
        {
            std::istringstream ss(line);
            if (shift == 0)
                _core1.emplace_back(Core());
            else
                _core2.emplace_back(Core());
            ss >> tmp;
            if (shift == 0)
            {
                for (int i = 0; i < 10; ++i)
                    ss >> (_core1.back()).Values[i];
            }
            else
            {
                for (int i = 0; i < 10; ++i)
                    ss >> (_core2.back()).Values[i];
            }
        }
    }
    shift = (shift == 0) ? 1 : 0;
}

std::string CPU::getFrequency()
{
    std::string buffer;
    std::string line;
    std::ifstream file("/proc/cpuinfo", std::ios::in);
    char buffer_return[1000];
    char buffer_strncmp[100000];
    int i = 0;
    int j = 0;

    if (file) {
        while (std::getline(file, line)) {
            i = 0;
            while (line[i] != '\0') {
                buffer_strncmp[i] = line[i];
                i++;
            }
            i--;
            buffer_strncmp[i] = '\0';
            if (strncmp("processor", buffer_strncmp, 9) == 0) {
                while (line[i] != '\0') {
                    buffer_return[j] = line[i];
                    i++;
                    j++;
                }
                buffer_return[j] = ' ';
                j++;
            } else if (strncmp("model name", buffer_strncmp, 10) == 0) {
                i = 13;
                while (line[i] != '\0') {
                    buffer_return[j] = line[i];
                    i++;
                    j++;
                }
                buffer_return[j] = ' ';
                j++;
            } else if (strncmp("cpu MHz", buffer_strncmp, 7) == 0) {
                i = 11;
                while (line[i] != '\0') {
                    buffer_return[j] = line[i];
                    i++;
                    j++;
                }
                buffer_return[j] = '\n';
                j++;
            }
        }
    }
    buffer_return[j - 1] = '\0';
    return ((std::string)buffer_return);
}