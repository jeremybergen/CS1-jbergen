/*
Name: Jeremy Bergen

Looping
*/
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>

using namespace std;

int main(int argc, char *argv[]) {
    string password = "42";
    string userPassword = "";
    int numGuesses = 0;
    
    // for( ; numGuesses < 6; ) {
    // while(numGuesses < 6) {
    do {
        cout << "Please enter the password: ";
        getline(cin, userPassword);
        if(userPassword == password) {
            cout << "You guessed the password" << endl;
            break;
        }
        cout << "Invalid password, try again" << endl;
        numGuesses++;
    } while(numGuesses < 6);

    if (numGuesses >=6) {
        cout << "Too many guesses, go away" << endl;
        return 0;
    }

    cout << "You are the correct person, welcome to our program" << endl;

    // int counter = 10;
    // // int num1;

    // do {
    //     cout << counter << ": Hello World" << endl;
    //     counter++;
    //     if(counter > 50) break;
    // } while(true);

    // while (true) {
    //     cout << "Please enter a number between 1 and 20: ";
    //     cin >> num1;
    //     if (num1 > 0 && num1 <= 20) {
    //         cout << "You followed the rules" << endl;
    //         break;
    //     }
    //     cout << "Try again" << endl;
    //     // cout << counter << ": Hello World" << endl;
    //     // counter++;
    // }

    // for( ; ; ) {
    //     cout << ": Hello World" << endl;
    // }


    cout << "Outside loop" << endl;



    return 0;
}


    // int j = 0;
    // for(unsigned int i = 4200000000; j > -1; i += 1000) {
    //     cout << i << ": Hello World" << endl;
    // }

    // for(int i = 0; i < 1; i++) {
    //     for(int j = 0; j < 3; j++) {
    //         for(int k = 0; k < 10; k++) {
    //             cout << "i, j: " << i << ", " << j << endl;
    //         }
    //     }
    //     // cout << i << ": Hello World" << endl;
    // }
    // cout << "i: " << i << endl;
    // for(int i = 0; i < 10; i++) {
    //     // if (i%2 == 0) {
    //     //     continue;
    //     // }
    //     if (floor(log2(i)) != log2(i)) {
    //         continue;
    //     }
    //     cout << "log2(i): " << log2(i) << endl;
    // }
    // int num1 = -1;

    // cout << boolalpha << "num1 > 0 && num1 <= 20: " << (num1 > 0 && num1 <= 20) << endl;
    // for( ; !(num1 > 0 && num1 <= 20); ) {
    //     cout << "Please enter a number between 1 and 20: " << endl;
    //     cin >> num1;
    //     if (!(num1 > 0 && num1 <= 20)) {
    //         cout << "Why can't you follow the rules...I'm sad now... Enter a value between 1 and 20." << endl;
    //     }
    // }


    // int num1;
    // int num2;

    // num1 = 42;
    // num2 = num1;

    // //num1 += 1;
    // //num1 = num1 + 1;
    // num1++;
    // num1--;
    // ++num1;
    // --num1;

    // cout << "num2: " << num2 << endl;