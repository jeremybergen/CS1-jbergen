/*
Name: Jeremy Bergen

Calculates the hours:minutes:seconds from a given number of seconds
*/
#include <iostream>

using namespace std;

int main() {
    unsigned int numSeconds;
    unsigned int numHours;
    unsigned int numMinutes;
    unsigned int remSeconds;
    string firstName;

    cout << "Please enter your first name: ";
    getline(cin, firstName);

    cout << "Welcome to our time calculator " << firstName << "." << endl;

    cout << "Please enter the number of seconds you wish to calculate from: ";
    cin >> numSeconds;

    // cout << "DEBUG: numSeconds: " << numSeconds << endl;
    numHours = numSeconds / 3600;
    numMinutes = (numSeconds/60)%60;
    remSeconds = numSeconds%60;

    cout << "The time give " << numSeconds << " is: " 
         << numHours << ":" << numMinutes << ":" << remSeconds << endl;

    return 0;
}