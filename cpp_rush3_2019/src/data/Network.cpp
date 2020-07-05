/*
** EPITECH PROJECT, 2020
** Network
** File description:
** network
*/

#include "Network.hpp"

int Networks::getNumberNetworks()
{
    std::ifstream file("/proc/net/dev");
    std::string line;
    int i = 0;

    std::getline(file, line);
    std::getline(file, line);
    while (std::getline(file, line))
    {
        i++;
    }
    return i;
}

Networks::Networks()
{
    _numberNetworks = getNumberNetworks();
    _network.resize(_numberNetworks);
}

Networks::~Networks()
{
}

void Network::setName(const std::string &name)
{
    _name = name;
}

const std::string &Network::getName() const
{
    return _name;
}

void Networks::setStatsNetwork()
{
    std::ifstream file("/proc/net/dev");
    std::string line;
    std::string tmp = "";

    std::getline(file, line);
    std::getline(file, line);
    for (int i = 0; std::getline(file, line); i++)
    {
        std::istringstream ss(line);
        ss >> tmp;
        tmp.erase(tmp.size() - 1);
        _network[i].setName(tmp);
        if (shift == 0)
        {
            ss >> _network[i]._network1[0];
            ss >> _network[i]._network1[1];
            ss >> tmp;
            ss >> tmp;
            ss >> tmp;
            ss >> tmp;
            ss >> tmp;
            ss >> tmp;
            ss >> _network[i]._network1[2];
            ss >> _network[i]._network1[3];
        }
        else
        {
            ss >> _network[i]._network2[0];
            ss >> _network[i]._network2[1];
            ss >> tmp;
            ss >> tmp;
            ss >> tmp;
            ss >> tmp;
            ss >> tmp;
            ss >> tmp;
            ss >> _network[i]._network2[2];
            ss >> _network[i]._network2[3];
        }
    }
    shift = (shift == 0) ? 1 : 0;
}

const std::string Network::getReceiveSpeed() const
{
    float result = _network2[0] - _network1[0];
    std::string tmp = "";

    if (result <= 0.000000) {
        return "0";
    }
    if (result > 1000.0) {
        result /= 1000.0;
        tmp = std::to_string(result);
        tmp.erase(4);
        tmp.append("KiB");
    } else {
        tmp = std::to_string(result);
        if (result < 1000)
            tmp.erase(3);
        else if (result < 100)
            tmp.erase(2);
        else
            tmp.erase(1);
        tmp.append("B");
    }
    return tmp;
}

const std::string Network::getReceivePPS() const
{
    float result = _network2[1] - _network1[1];
    std::string tmp = "";

    if (result <= 0.000000) {
        return "0";
    }
    if (result > 1000.0) {
        result /= 1000.0;
        tmp = std::to_string(result);
        tmp.erase(4);
        tmp.append("KiB");
    } else {
        tmp = std::to_string(result);
        if (result < 1000.0)
            tmp.erase(3);
        else if (result < 100.0)
            tmp.erase(2);
        else
            tmp.erase(1);
        tmp.append("B");
    }
    return tmp;
}

const std::string Network::getTransmitSpeed() const
{
    float result = _network2[2] - _network1[2];
    std::string tmp = "";

    if (result <= 0.000000) {
        return "0";
    }
    if (result > 1000.0) {
        result /= 1000.0;
        tmp = std::to_string(result);
        tmp.erase(4);
        tmp.append("KiB");
    } else {
        tmp = std::to_string(result);
        if (result < 1000)
            tmp.erase(3);
        else if (result < 100)
            tmp.erase(2);
        else
            tmp.erase(1);
        tmp.append("B");
    }
    return tmp;
}

const std::string Network::getTransmitPPS() const
{
    float result = _network2[3] - _network1[3];
    std::string tmp = "";

    if (result <= 0.000000) {
        return "0";
    }
    if (result > 1000.0) {
        result /= 1000.0;
        tmp = std::to_string(result);
        tmp.erase(4);
        tmp.append("KiB");
    } else {
        tmp = std::to_string(result);
        if (result < 1000)
            tmp.erase(3);
        else if (result < 100)
            tmp.erase(2);
        else
            tmp.erase(1);
        tmp.append("B");
    }
    return tmp;
}