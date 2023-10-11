/*
Name: Jeremy Bergen

Arrays!!!!
*/

#include <iostream>

using namespace std;

// void printArrays(int*, size_t);

int main(int argc, char *argv[]) {
    // int numbers[1000][1000][3];
    int *numbers = new int[600000000];

    for(size_t i = 0; i < 600000000; i++) {
        numbers[i] = i;
    }

    // cout << sizeof(numbers) << endl;

    // int numbers[3][3] = {0};
    // int moreNums[3][3][3] = {0};

    // numbers[2][0] = 42;
    // numbers[1][1] = 15;

    // // for(size_t i = 0; i < 3; i++) {
    // //     for(size_t j = 0; j < 3; j++) {
    // //         for(size_t k = 0; k < 3; k++) {
    // //             cout << "moreNums[" << i << "][" << j << "][" << k << "]: " << moreNums[i][j][k] << endl;
    // //         }
    // //     }
    // // }
    // printArrays(&numbers[0][0], 3);

    delete[] numbers;
    return 0;
}

// void printArrays(int numbers[][3], size_t arrSize) {
// void printArrays(int* numbers, size_t arrSize) {
//     int counter = 0;
//     for(size_t i = 0; i < arrSize; i++) {
//         for(size_t j = 0; j < arrSize; j++) {
//                 // cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
//                 cout << "numbers[" << i << "][" << j << "]: " << *(numbers + (arrSize*i) + j) << endl;
//                 counter++;
//         }
//     }
// }









// size_t getArrSize();
// void getNums(size_t, int[]);
// void printNums(int*, size_t);
// void copyArray(int[], int[], size_t);

// int main(int argc, char *argv[]) {
//     size_t arrSize = getArrSize();
//     int *ptr;
//     // unsigned long arrSize = 10;

//     int numbers[arrSize];
//     int numbers2[arrSize];
//     int *numbers3;

//     ptr = numbers;

//     getNums(arrSize, ptr);

//     cout << "numbers: " << endl;
//     printNums(numbers, arrSize);

//     copyArray(numbers, numbers2, arrSize);

//     numbers[0] = 8;

//     cout << "numbers2 after copy: " << endl;
//     printNums(numbers2, arrSize);

//     numbers3 = numbers;

//     cout << "numbers3: " << endl;
//     printNums(numbers3, arrSize);

//     return 0;
// }

// void copyArray(int source[], int destination[], size_t arrSize) {
//     for(size_t i = 0; i < arrSize; i++) {
//         destination[i] = source[i];
//     }
// }

// void printNums(int* numbers, size_t arrSize) {
//     // size_t arrSize = sizeof(numbers)/sizeof(int); WILL NOT WORK!!!
//     for(size_t i = 0; i < arrSize; i++) {
//         // cout << "numbers[" << i << "]: " << numbers[i] << endl;
//         cout << "*(numbers+i): " << *(numbers+i) << endl;
//     }
// }

// void getNums(size_t arrSize, int numbers[]) {
//     cout << "Please enter " << arrSize << " numbers." << endl;
//     for(size_t i = 0; i < arrSize; i++) {
//         cin >> numbers[i];
//     }
// }

// size_t getArrSize() {
//     size_t arrSize;
//     cout << "How many numbers do you want? ";
//     cin >> arrSize;
//     return arrSize;
// }









    // unsigned int arrSize = 100;
    // int numbers[] = {42, 15, 23, 9000, 1234, -1};
    // // int number[10];
    // unsigned int tmpNum;

    // int* ptr;
    // // unsigned int counter = 0;

    // // for(unsigned int i = 0; i < arrSize; i++) {
    // //     numbers[i] = -1;
    // // }

    // // cout << "Enter whole positive numbers or -1 to quit" << endl;
    // // for(unsigned int i = 0; i < arrSize; i++) {
        
    // //     cout << "What is the number? ";
    // //     cin >> tmpNum;
    // //     if(tmpNum == -1) {
    // //         numbers[i] = -1;
    // //         break;
    // //     }
    // //     numbers[i] = tmpNum;
    // //     // counter++;
    // //     // cin >> numbers[i];
    // // }

    // // for(unsigned int i = 0; i < arrSize; i++) {
    // // int i = 0;
    // // while(numbers[i] != -1) {
    
    // // for(unsigned int i = 0; i < arrSize; i++) {
    // //     if(numbers[i] == -1) {
    // //         break;
    // //     }
    // //     cout << "numbers[" << i << "]: " << numbers[i] << endl;
    // //     // i++;
    // // }
    // cout << "&numbers[0]: \t" << &numbers[0] << endl;
    // cout << "&numbers: \t" << numbers << endl;
    // ptr = numbers;
    // // ptr = &numbers;
    // // ptr = &numbers[0];

    // for(int i = 0; i < sizeof(numbers)/sizeof(int); i++) {
    //     cout << *(ptr+i) << " == " << numbers[i] << endl;
    //     // cout << "*ptr: " << *(ptr) << endl;
    //     // ptr++;
    // }

    // cout << "sizeof(string): " << sizeof(string) << endl;
    // cout << "sizeof(numbers): " << sizeof(numbers) << endl;

    // numbers[0] = 42;
    // numbers[1] = 15;
    // numbers[2] = 23;
    // numbers[3] = 9000;
    // numbers[4] = -15;

    // cout << "numbers[0]: " << numbers[0] << endl;
    // cout << "numbers[1]: " << numbers[1] << endl;
    // cout << "numbers[2]: " << numbers[2] << endl;
    // cout << "numbers[3]: " << numbers[3] << endl;
    // cout << "numbers[4]: " << numbers[4] << endl;

    // cout << "&numbers[0]: " << &numbers[0] << endl;
    // cout << "&numbers[1]: " << &numbers[1] << endl;
    // cout << "&numbers[2]: " << &numbers[2] << endl;
    // cout << "&numbers[3]: " << &numbers[3] << endl;
    // cout << "&numbers[4]: " << &numbers[4] << endl;

