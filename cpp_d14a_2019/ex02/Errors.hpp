
#ifndef ERRORS_HPP_
#define ERRORS_HPP_

#include <string>
#include <iostream>

class CommunicationError : public std::exception
{
    public:
        CommunicationError (std::string const &message, std::string const &component = "UNKNOWN") noexcept;
        ~CommunicationError ();
        const char* what() const noexcept;
        const std::string &getComponent() const;
        const std::string &getMessage() const;
    protected:
        std::string _message;
        std::string _component;
};

#endif