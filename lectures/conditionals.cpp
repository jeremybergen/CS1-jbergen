/*
Name: Jeremy Bergen

Condtionals
*/
#include <iostream>

using namespace std;

int main() {
    int n1;
    // int someNumber;

    cout << "Please enter a whole number: ";
    cin >> n1;
    // n1 = -10;
    // n2 = 10;

    if (n1%2 == 0) {
        cout << "n1 is even" << endl;
    } else {
        cout << "n1 is odd" << endl;
    }
    
    if (n1 < 0) {
        cout << "n1 is negative" << endl;
    } else {
        if (n1 == 0) {
            cout << "n1 is zero" << endl;
        } else {
            cout << "n1 is positive" << endl;
        }
    }

    // if (n1 != n2)
    // {
    //     cout << "The two numbers are NOT equal." << endl;
    //     if (n1 < n2) {
    //         cout << "n1 is less than n2" << endl;
    //     } else {
    //         cout << "n1 is greater than n2" << endl;
    //     }
    //     // someNumber = 42;
    // }
    // else
    // {
    //     cout << "The two numbers are equal" << endl;
    // }

    // cout << "someNumber: " << someNumber << endl;

    // if (n1 >= n2) {
    //     cout << "n1 is larger or equal to n2." << endl;
    // }

    cout << "After if conditionals." << endl;

    // cout << boolalpha << (n1 == n2) << endl;
    // cout << boolalpha << (n1 != n2) << endl;
    // cout << boolalpha << (n1 < n2) << endl;
    // cout << boolalpha << (n1 <= n2) << endl;
    // cout << boolalpha << (n1 > n2) << endl;
    // cout << boolalpha << (n1 >= n2) << endl;
    return 0;
}