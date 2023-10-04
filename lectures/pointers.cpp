/*
Name: Jeremy Bergen

Pointers
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

void getNum(int**);
//void getNum(int&);

int main(int argc, char *argv[]) {
    int num1, num2, num3, num6;
    // long num4, num5;
    // int num6;
    int* ptr1;

    ptr1 = &num1;

    num1 = 42;
    num2 = 15;
    num3 = 9000;
    // num4 = 98432198321;
    // num5 = 43298479832743298432;
    num6 = -100;

    // cout << "&num1: " << &num1 << endl;
    cout << "&num2: " << &num2 << endl;
    // cout << "&num3: " << &num3 << endl;
    // cout << "&num6: " << &num6 << endl;
    for(int i = 0; i < 4; i++) {
        cout << "ptr1: " << ptr1 << endl;
        cout << "*ptr1: " << *ptr1 << endl;
        ptr1++;
    }

    // cout << "*ptr1: " << *ptr1 << endl;
    
    // // ptr1++;
    // ptr1 = ptr1 + 2;

    // cout << "*ptr1: " << *ptr1 << endl;

    // ptr1++;

    // cout << "*ptr1: " << *ptr1 << endl;


    // int num1;
    // int* ptr1;

    // ptr1 = &num1;

    // getNum(&ptr1);
    // //getNum(42);

    // cout << "num1: " << num1 << endl;

    return 0;
}

// void getNum(int** number1) {
//     *(*number1) = 42;
// }










    // // string firstName;
    // // string* pointerFirstName;

    // // firstName = "Jeremy";
    // // pointerFirstName = &firstName;

    // // cout << "firstName: " << firstName << endl;
    // // cout << "*pointerFirstName: " << *pointerFirstName << endl;
    // int num1;
    // int* ptr1;
    // // char** ptr2;
    // // char*** ptr3;
    // // char**** ptr4;

    // // num1 = (long)2147483647 + 1;
    // num1 = 42;
    // ptr1 = &num1;
    // // ptr2 = &ptr1;

    // cout << "num1: " << num1 << endl;
    // cout << "ptr1: " << ptr1 << endl;
    // // cout << "ptr2: " << ptr2 << endl;
    // cout << "&num1: " << &num1 << endl;
    // cout << "&ptr1: " << &ptr1 << endl;
    // // cout << "&ptr2: " << &ptr2 << endl;
    // // cout << "&num2: " << &num2 << endl;
    // // cout << "&num3: " << &num3 << endl;
    // cout << "*(&num1): " << *(&num1) << endl;
    // cout << "*ptr1: " << *ptr1 << endl;
    // // cout << "**ptr2: " << **ptr2 << endl;
    // // cout << "*ptr2: " << *ptr2 << endl;