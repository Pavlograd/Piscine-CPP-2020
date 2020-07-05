
#include <iostream>
#include <stdexcept>
#include "Errors.hpp"
#include "CommunicationDevice.hpp"

CommunicationDevice::CommunicationDevice(std::istream &input,
                                         std::ostream &output)
    : _api(input, output)
{
    try {
        CommunicationAPI(input, output);
    } catch (const std::exception &e) {
        std::string s = e.what();
        CommunicationError error("Error: " + s, "CommunicationAPI");
        throw error;
    }
}

CommunicationDevice::~CommunicationDevice()
{
}

void
CommunicationDevice::startMission(std::string const &missionName,
                                  std::string *users,
                                  size_t nbUsers)
{
    for (size_t i = 0; i < nbUsers; ++i)
        _api.addUser(users[i]);
    try {
        _api.startMission(missionName);
    } catch (const std::logic_error &l) {
        std::string s = l.what();
        CommunicationError error("LogicError: " + s, "CommunicationDevice");
        throw error;
    } catch (const std::runtime_error &r) {
        std::string s = r.what();
        CommunicationError error("RunTimeError: " + s, "CommunicationDevice");
        throw error;
    } catch (const std::exception &e) {
        std::string s = e.what();
        CommunicationError error("Error: " + s, "CommunicationDevice");
        throw error;
    } 
}

void
CommunicationDevice::send(std::string const &user,
                          std::string const &message) const
{
    try {
        _api.sendMessage(user, message);
    } catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
    }
}

void
CommunicationDevice::receive(std::string const &user,
                             std::string &message) const
{
    try {
        _api.receiveMessage(user, message);
    } catch (std::exception const &e) {
        std::cerr << e.what() << std::endl;
        message = "INVALID MESSAGE";
    }
}