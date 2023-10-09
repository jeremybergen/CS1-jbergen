/*
Name: Jeremy Bergen

Pointers
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

// int* addNums(int, int, int*);
// void sayHello(string);
// void sayGoodbye(void*(string), string);

void function1(string test) {
    cout << "Function 1" << endl;
    cout << test << endl;
}

void function2(void (*ptr)(string)) {
    (*ptr) ("Jeremy");
    cout << "Function 2" << endl;
}

int main(int argc, char *argv[]) {
    // void (*ptr)("Jeremy") = &function1;
    
    // void (*ptr2)() = &function2;
    function2("Jeremy");
    // sayHello("Jeremy");
    // // cout << &sayHello << endl;

    // void (*ptr1)(string) = &sayHello;

    // ptr1("Bergen");

    // sayGoodbye(ptr1(), "Jeremy");

    // int num1, num2;
    // int sum;
    // int* answer = &sum;

    // num1 = 42;
    // num2 = 15;

    // answer = addNums(num1, num2, &sum);

    // cout << num1 << " + " << num2 << " = " << *answer << endl;

    return 0;
}



// void sayGoodbye(void (*ptr)(string name2), string name) {
//     ptr(name);
//     // cout << "Goodbye " << *ptr(name) << endl;
// }

// void sayHello(string name) {
//     cout << "Hello " << name << endl;
// }

// int* addNums(int n1, int n2, int* sum) {
//     int* result = sum;
    

//     *result = n1 + n2;
//     return result;
// }






// void getNum(int**);
//void getNum(int&);

    // int num1, num2;
    // int* ptr1, ptr2;

    // int* heapPtr1 = new int;
    // string* strPtr1 = new string;
    // int** heapPtr2 = new int*;

    // cout << "&num1: \t\t" << &num1 << endl;
    // cout << "&num2: \t\t" << &num2 << endl;
    // cout << "&ptr1: \t\t" << &ptr1 << endl;
    // cout << "&ptr2: \t\t" << &ptr2 << endl;

    // cout << "&heapPtr1: \t" << &heapPtr1 << endl;
    // cout << "&strPtr1: \t" << &strPtr1 << endl;

    // cout << "heapPtr1: \t" << heapPtr1 << endl;
    // cout << "strPtr1: \t" << strPtr1 << endl;

    // *heapPtr1 = 42;
    // *strPtr1 = "Jeremy";

    // cout << "*heapPtr1: \t" << *heapPtr1 << endl;
    // cout << "*strPtr1: \t" << *strPtr1 << endl;
    // // int num1 = 0;
    // // int* ptr1 = nullptr;

    // // num1 = 42;

    // // ptr1 = nullptr;
    // // ptr1 = NULL;
    // // ptr1 = __null;

    // // if(ptr1 == nullptr) {
    // //     cout << "We don't have a valid address stored" << endl;
    // // }

    // delete strPtr1;
    // delete heapPtr1;
// void getNum(int** number1) {
//     *(*number1) = 42;
// }









    // int num1, num2, num3, num6;
    // // long num4, num5;
    // // int num6;
    // int* ptr1;

    // ptr1 = &num1;

    // num1 = 42;
    // num2 = 15;
    // num3 = 9000;
    // // num4 = 98432198321;
    // // num5 = 43298479832743298432;
    // num6 = -100;

    // // cout << "&num1: " << &num1 << endl;
    // cout << "&num2: " << &num2 << endl;
    // // cout << "&num3: " << &num3 << endl;
    // // cout << "&num6: " << &num6 << endl;
    // for(int i = 0; i < 4; i++) {
    //     cout << "ptr1: " << ptr1 << endl;
    //     cout << "*ptr1: " << *ptr1 << endl;
    //     ptr1++;
    // }

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