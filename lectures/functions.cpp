/*
Name: Jeremy Bergen





Functions
*/
#include <iostream>
// #include <cmath>
// #include <string>
// #include <cstdlib>
// #include <cstdio>
#include <iomanip>
// #include "bits/stdc++.h"

using namespace std;

int main() {
    int fieldWidth = 12;

    //fName     lName      GPA
    //=============================
    //Jeremy    Bergen     2.0
    //Bob       Ross       4.0
    cout << left;
    cout << setw(fieldWidth) << "fName" << setw(fieldWidth) << "lName" << left << setw(fieldWidth) << "GPA" << endl;
    cout << setfill('=') << setw(3*fieldWidth) << "=" << endl << setfill(' ');
    cout << left << setw(fieldWidth) << "Jeremy" << setw(fieldWidth) << "Bergen" 
         << left << setw(fieldWidth) << setprecision(3) << 2.7422891268 << endl;
    cout << left << setw(fieldWidth) << "Bob" << setw(fieldWidth) << "Ross" 
         << left << setw(fieldWidth) << setprecision(3) << 4.01 << endl;

    // cout << left;
    // cout << setfill('=');
    // cout << setw(fieldWidth) << "This" << setw(fieldWidth) << "is" 
    //      << setw(fieldWidth) << "a" << setw(fieldWidth) << "string" << endl;
    // cout << right;
    // cout << setw(fieldWidth) << "There" << setw(fieldWidth) << "are" 
    //      << setw(fieldWidth) << "four" << setw(fieldWidth) << "columns" << endl;
    // cout << "This\t\tis\ta\tstring" << endl;
    // cout << "There're\tare\tfour\tcolumns" << endl;

    // float num1 = 42.23;
    // int num2 = 42;

    // cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    // printf("%.1f + %d = %.2f\n", num1, num2, num1 + num2);
    // cout << "num1 = " << num1 << endl;
    // printf("num1 = %f\n", num1);


    // string someStr;
    // int num1;

    // someStr = "42";
    // num1 = atoi(someStr.c_str());
    // cout << "num1: " << num1 << endl;



    // int base, power;

    // base = 2;
    // power = 4;

    // cout << "sqrt(2) = " << sqrt(base) << endl;
    

    // int number1, number2;

    // cout << "Enter 2 numbers separated by a space: ";
    // cin >> number1 >> number2;

    // cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
    // cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
    // cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
    // cout << number1 << " / " << number2 << " = " << (long)number1 / (double)number2 << endl;
    // cout << number1 << " % " << number2 << " = " <<  number1%number2 << endl;
    // int number1;

    // cout << "Please enter a number: ";
    // cin >> number1;

    // cout << "The abs of your number is: " <<  << endl;

    // 2^5
    // cout << "2 raised to the power of 10 is: " << (2^10) << endl;
    // cout << "The square root of 2 is: " << sqrt(2) << endl;

    // int a;
    // cout << "Hello" << endl;
    // cin >> a;
    // getline()
    return 0;
}