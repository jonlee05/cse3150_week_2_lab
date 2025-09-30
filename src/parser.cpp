#include <iostream>
#include <string>
#include "parser.h"


void parseName(const std::string& fullName, string* firstName, string* lastName)
{
    size_t pos = fullName.find(" ");
    if(pos == std::string::npos)
    {
        std::cout << "Enter first and last name with a space in between" << std::endl;
        return;
    }
    *firstName = fullName.substr(0, pos);
    *lastName = fullName.substr(pos+1);
}

string getUsername(const string& email)
{
    size_t pos = email.find("@");
    string user = email.substr(0, pos);
    return user;
}