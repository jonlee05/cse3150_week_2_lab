#include <iostream>
#include <string>
#include "parser.h"

using std::cout;
using std::endl; 
using std::cin;
using std::string;

int main()
{
    cout << "Enter full name";
    string fullName;
    std::getline(cin, fullName);
    cout << "Enter email";
    string email;
    std::getline(cin, email);
    string* firstName = new string;
    string* lastName = new string;
    parseName(fullName, firstName, lastName);
    string username = getUsername(email);
    cout << "First Name: " << *firstName << endl;
    cout << "Last Name: " << *lastName << endl;
    cout << "Username: " << username << endl;
    delete firstName;
    delete lastName;
    return 0;
}