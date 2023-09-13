/*
Name: Jeremy Bergen

Functions!!!!
*/
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

// DON'T DO!!!!!!!!!!!!!!!!!!! string fName;
const string fName = "Jeremy";
const float myPi = 3.5;

// void sayGoodbye() {
//     cout << "Goodbye everyone" << endl;
//     cout << "We have another line" << endl;
//     // sayHello();
// }

// void sayHello() {
//     cout << "Hello Everyone!" << endl;
//     cout << "This is a second line" << endl;
//     sayGoodbye();
// }

// int favoriteNumber() {
//     cout << "I'm going to give you my favorite number that nobody knows what it is..." << endl;
//     return 42;
// }

// bool amIHappy() {
//     return true;
// }

// string promptName() {
//     string fName;
//     cout << "DEBUG: &fName: " << &fName << endl;
//     cout << "DEBUG: fName: " << fName << endl;
//     cout << "Please enter your first name: ";
//     getline(cin, fName);
//     return fName;
// }

// float addNums(float n1, float n2) {
//     float answer = n1 + n2;
//     cout << "DEBUG: func answer: " << &answer << endl;
//     // int sum;
//     // sum = n1 + n2;
//     return answer;
// }

void addNums(const float &bob, const float &alice, float &phil) {
    cout << "DEBUG: func answer: " << &phil << endl;
    phil = bob + alice;
    // alice = alice + 100;
}

int main() {
    float num1, num2;
    float answer = 0;

    
    cout << "Please enter two whole numbers separated by a space: ";
    cin >> num1 >> num2;

    cout << "DEBUG: main answer: " << &answer << endl;
    addNums(num1, 15, answer);
    cout << num1 << " + " << num2 << " = " << answer << endl;
    // addNums(num1, 15, answer);
    // cout << answer << endl;


    // answer = addNums(num1, num2);
    // printf("%f + %f = %f\n", num1, num2, answer);

    // cout << "Please enter two whole numbers separated by a space: ";
    // cin >> num1 >> num2;

    // answer = addNums(num1, 15);
    // printf("%f + %i = %f\n", num1, 15, answer);

    // bool happiness;
    // string fName;

    // sayHello();
    // // cout << "DEBUG: in main &fName: " << &fName << endl;
    // //cout << 42 << endl;
    // cout << favoriteNumber() << endl;

    // happiness = amIHappy();
    // //happiness = 1;
    // cout << "Am I Happy? " << boolalpha << happiness << endl;

    // fName = promptName();
    // cout << "Welcome " << fName << " to our program." << endl;

    // fName = promptName();
    // cout << "Welcome " << fName << " to our program." << endl;

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