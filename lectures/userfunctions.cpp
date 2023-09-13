/*
Name: Jeremy Bergen

Functions!!!!
*/
#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>
#include <cassert>

using namespace std;

// void sayGoodbye();
// void sayHello();
// float addNums(float, float);
// int addNums(int, int);
// float addNums(float, int);

// template<typename T1, class newType2, class type3>
// type3 addNums(T1, newType2, type3);

int addNums(int&, int&);
void tests();

int main() {
    // sayHello();
    // float num1, num2;
    // num1 = 42.52;
    // num2 = 15.123;
    // cout << addNums<float, float, int>(num1, num2, 42) << endl;
    tests();
    return 0;
}

void tests() {
    int n1, n2;
    n1 = 42;
    n2 = 15;
    assert(addNums(n1, n2) == 62);
    n1 = 0;
    n2 = -1;
    assert(addNums(n1, n2) == 4);
    n1 = 1;
    n2 = 5;
    assert(addNums(n1, n2) == 11);
    cout << "All test cases passed" << endl;
}

int addNums(int &n1, int &n2) {
    return n1 + n2 + 5;
}

// template<typename T1, class newType2, class type3>
// type3 addNums(T1 n1, newType2 n2, type3 n3) {
//     type3 sum;
//     sum = n1 + n2 + n3;
//     return sum;
// }

// float addNums(float n1, int n2) {
//     cout << "Inside float/int function" << endl;
//     return n1 - n2;
// }

// float addNums(float n1, float n2) {
//     cout << "Inside float function" << endl;
//     return n1 + n2;
// }

// int addNums(int n1, int n2) {
//     cout << "Inside int function" << endl;
//     return n1 + n2;
// }

// void sayGoodbye() {
//     cout << "Goodbye Everyone" << endl;
//     sayHello();
// }

// void sayHello() {
//     cout << "Hello Everyone" << endl;
//     sayGoodbye();
// }


















    // float num1, num2;
    // float answer = 0;

    
    // cout << "Please enter two whole numbers separated by a space: ";
    // cin >> num1 >> num2;

    // cout << "DEBUG: main answer: " << &answer << endl;
    // addNums(num1, 15, answer);
    // cout << num1 << " + " << num2 << " = " << answer << endl;
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



// DON'T DO!!!!!!!!!!!!!!!!!!! string fName;
// const string fName = "Jeremy";
// const float myPi = 3.5;

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

// void addNums(float &bob, const float &alice, float &phil) {
//     cout << "DEBUG: func answer: " << &phil << endl;
//     phil = bob + alice;
//     // alice = alice + 100;
// }
