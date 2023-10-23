/*
Name: Jeremy Bergen

Worksheet 4
*/
#include <iostream>

using namespace std;

void addTen(int*);

int main(int argc, char *argv[]) {
    int n1 = 42;
    int *ptr = &n1;

    addTen(ptr);

    cout << *ptr << endl;

    return 0;
}

void addTen(int* number) {
    *number += 10;
}





    // int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int* ptr;

    // ptr = &matrix[1][2];

    // cout << *ptr << endl;

    // size_t arrSize = 3;
    // int* nums[arrSize];
    // int numbers[arrSize];
    // // int n1, n2, n3;

    // // nums[0] = &n1;
    // // nums[1] = &n2;
    // // nums[2] = &n3;

    // for(size_t i = 0; i < arrSize; i++) {
    //     nums[i] = &numbers[i];
    // }

    // for(size_t i = 0; i < arrSize; i++) {
    //     cin >> *(nums[i]);
    // }

    // for(size_t i = 0; i < arrSize; i++) {
    //     cout << *(*nums+i) << endl;
    // }