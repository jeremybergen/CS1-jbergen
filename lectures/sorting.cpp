/*
Name: Jeremy Bergen

Bubble Sort
*/
#include <iostream>

using namespace std;

void printArray(int[], size_t);

int main(int argc, char *argv[]) {
    bool sorted = true;
    size_t arrSize = 5;
    int numbers[arrSize] = {42, 15, 23, 9000, 23};

    cout << "Original Array" << endl;
    printArray(numbers, arrSize);

    for(size_t j = 0; j < arrSize-1; j++) {
        sorted = true;
        for(size_t i = 0; i < arrSize-1-j; i++) {
            if(numbers[i] > numbers[i+1]) {
                int tmpNum = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = tmpNum;
                sorted = false;
            }
        }
        
        if(sorted) {
            break;
        }
        printArray(numbers, arrSize);
    }

    cout << "Sorted Array" << endl;
    printArray(numbers, arrSize);

    return 0;
}

void printArray(int numbers[], size_t arrSize) {
    for(size_t i = 0; i < arrSize; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}