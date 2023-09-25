/*
Name: Jeremy Bergen

Condtionals
*/
#include <iostream>
#include <cassert>

using namespace std;

int addNums(int, int);
void tests();

int main(int argc, char *argv[]) {
    int n1, n2;

    if (argc >= 2 && (string)argv[1] == "test") {
        // cout << "There are at least 2 command line arguments" << endl;
        // cout << "The second one is \"test\"" << endl;
        tests();
        return 0;
    }

    

    cout << "Please enter 2 numbers separated by a space: ";
    cin >> n1 >> n2;

    cout << n1 << " + " << n2 << " = "
         << addNums(n1, n2) << endl;

    return 0;
}

void tests() {
    assert(addNums(42, 15) == 57);
    assert(addNums(-5, 12) == 7);
    assert(addNums(12, 17) == 29);
    cout << "All test cases passed" << endl;
}

int addNums(int num1, int num2) {
    int sum;
    sum = num1 + num2;
    return sum;
}








    // cout << "argc: " << argc << endl;
    // cout << "argv[1]: " << argv[1] << endl;


    // int num1;

    // cout << "Please enter a whole number: ";
    // cin >> num1;

    // // if (num1%2 == 0 || num1 > 0) {
    // //     cout << num1 << " is even and/or positive" << endl;
    // // } else if (num1 < 0) {
    // //     cout << num1 << " is negative." << endl;
    // // }
    // //  (num1 >= 0)
    // if (!(num1 < 0)) {
    //     cout << num1 << " is negative." << endl;
    //           //   num1%2 != 0  &&   num1 <= 0
    //           // !(num1%2 == 0) && !(num1 > 0)
    // } else if (!(num1%2 == 0 || num1 > 0)) {
    //     cout << num1 << " is even and positive or zero" << endl;
    // }

    // if (num1 >= 0 && num1%2 == 0) {
    //     cout << num1 << " is positive and even." << endl;
    // } else if (num1 >= 0 && num1%2 != 0) {
    //     cout << num1 << " is postive and odd." << endl;
    // } else if (num1 < 0 && num1%2 == 0) {
    //     cout << num1 << " is negative and even." << endl;
    // } else {
    //     cout << num1 << " is negative and odd." << endl;
    // }












    // int n1;
    // // int someNumber;

    // cout << "Please enter a whole number: ";
    // cin >> n1;

    // switch(n1) {
    //     case 'J':
    //     case '&':
    //         cout << "You entered &" << endl;
    //         break;
    //     default:
    //         cout << "You entered something else" << endl;
    //         break;
    // }
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

    // cout << "After if conditionals." << endl;

    // cout << boolalpha << (n1 == n2) << endl;
    // cout << boolalpha << (n1 != n2) << endl;
    // cout << boolalpha << (n1 < n2) << endl;
    // cout << boolalpha << (n1 <= n2) << endl;
    // cout << boolalpha << (n1 > n2) << endl;
    // cout << boolalpha << (n1 >= n2) << endl;
