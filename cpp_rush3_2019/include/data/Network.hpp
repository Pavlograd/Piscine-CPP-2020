/*
** EPITECH PROJECT, 2020
** network
** File description:
** network
*/

#ifndef network_
#define network_

#include <iostream>
#include <chrono>
#include <fstream>
#include <sstream>
#include <string>
#include <thread>
#include <vector>

class Network
{
public:
	Network(){};
	~Network(){};
	void setName(const std::string &name);
	const std::string &getName() const;
	unsigned int _network1[4];
	unsigned int _network2[4];
	const std::string getReceiveSpeed() const;
	const std::string getReceivePPS() const;
	const std::string getTransmitSpeed() const;
	const std::string getTransmitPPS() const;

protected:
private:
	std::string _name;
};

class Networks
{
public:
	Networks();
	~Networks();
	int getNumberNetworks();
	std::vector<Network> _network;
	void setStatsNetwork();

protected:
private:
	int _numberNetworks = 0;
	int shift = 0;
};

#endif /* !network */