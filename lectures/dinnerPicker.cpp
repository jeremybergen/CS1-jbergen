/*
Name: Jeremy Bergen

Dinner selector program
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

bool getPass(string);

int main(int argc, char *argv[]) {
    bool passMatch;
    string userPass = "42";

    passMatch = getPass(userPass);

    if(passMatch) {
        
    }


    return 0;
}

bool getPass(string userPass) {
    string enterPass;
    cout << "Please enter the password to continue: ";
    getline(cin, enterPass);

    if (userPass == enterPass) {
        return true;
    }
    return false;
}