#ifndef PARSER_H
#define PARSER_H
#include <string>

using std::string;

void parseName(const std::string& fullName, string* firstName, string* lastName);

string getUsername(const string& email); 

#endif