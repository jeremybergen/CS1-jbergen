/*
Name: Jeremy Bergen

Functions!!!!
*/
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

// DON'T DO!!!!!!!!!!!!!!!!!!! string fName;

void sayGoodbye() {
    cout << "Goodbye everyone" << endl;
    cout << "We have another line" << endl;
    // sayHello();
}

void sayHello() {
    cout << "Hello Everyone!" << endl;
    cout << "This is a second line" << endl;
    sayGoodbye();
}

int favoriteNumber() {
    cout << "I'm going to give you my favorite number that nobody knows what it is..." << endl;
    return 42;
}

bool amIHappy() {
    return true;
}

string promptName() {
    string fName;
    cout << "DEBUG: &fName: " << &fName << endl;
    cout << "DEBUG: fName: " << fName << endl;
    cout << "Please enter your first name: ";
    getline(cin, fName);
    return fName;
}

int main() {
    bool happiness;
    string fName;

    sayHello();
    // cout << "DEBUG: in main &fName: " << &fName << endl;
    //cout << 42 << endl;
    cout << favoriteNumber() << endl;

    happiness = amIHappy();
    //happiness = 1;
    cout << "Am I Happy? " << boolalpha << happiness << endl;

    fName = promptName();
    cout << "Welcome " << fName << " to our program." << endl;

    fName = promptName();
    cout << "Welcome " << fName << " to our program." << endl;

    // sayHello();
    // sayGoodbye();
    // sayHello();
    // sayGoodbye();
    // sayHello();
    // sayGoodbye();
    // sayHello();
    // sayGoodbye();
    // sayHello();
    // sayGoodbye();
    return 0;
}