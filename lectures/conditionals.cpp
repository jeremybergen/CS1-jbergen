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

    switch(n1) {
        case 'J':
        case '&':
            cout << "You entered &" << endl;
            break;
        default:
            cout << "You entered something else" << endl;
            break;
    }
    // n1 = -10;
    // n2 = 10;

    // if (n1%2 == 0) {
    //     cout << "n1 is even" << endl;
    // } else {
    //     cout << "n1 is odd" << endl;
    // }



    // switch (n1) {
    //     case 0:
    //         cout << "n1 is zero" << endl;
    //         break;
    //     case 42:
    //         cout << "n1 is 42" << endl;
    //         if (n1 == 0) {
    //             cout << "n1 is zero" << endl;
    //         } else if (n1 > 0) {
    //             cout << "n1 is positive" << endl;
    //         } else if (n1 < 0) {
    //             cout << "n1 is negative" << endl;
    //         } else {
    //             cout << "We should never get here" << endl;
    //         }
    //         break;
    //     case -15:
    //         cout << "n1 is -15" << endl;
    //         break;
    //     default:
    //         cout << "n1 is not zero, 42 or -15" << endl;
    //         break;
    // }


    // if (n1 < 0) {
    //     cout << "n1 is negative" << endl;
    // } else {
    //     if (n1 == 0) {
    //         cout << "n1 is zero" << endl;
    //     } else {
    //         cout << "n1 is positive" << endl;
    //     }
    // }

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