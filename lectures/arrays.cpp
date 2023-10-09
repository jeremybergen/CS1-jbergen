/*
Name: Jeremy Bergen

Arrays!!!!
*/

#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    unsigned int arrSize = 100;
    int numbers[] = {42, 15, 23, 9000, 1234, -1};
    unsigned int tmpNum;

    int* ptr;
    // unsigned int counter = 0;

    // for(unsigned int i = 0; i < arrSize; i++) {
    //     numbers[i] = -1;
    // }

    // cout << "Enter whole positive numbers or -1 to quit" << endl;
    // for(unsigned int i = 0; i < arrSize; i++) {
        
    //     cout << "What is the number? ";
    //     cin >> tmpNum;
    //     if(tmpNum == -1) {
    //         numbers[i] = -1;
    //         break;
    //     }
    //     numbers[i] = tmpNum;
    //     // counter++;
    //     // cin >> numbers[i];
    // }

    // for(unsigned int i = 0; i < arrSize; i++) {
    // int i = 0;
    // while(numbers[i] != -1) {
    
    // for(unsigned int i = 0; i < arrSize; i++) {
    //     if(numbers[i] == -1) {
    //         break;
    //     }
    //     cout << "numbers[" << i << "]: " << numbers[i] << endl;
    //     // i++;
    // }
    cout << "&numbers[0]: \t" << &numbers[0] << endl;
    cout << "&numbers: \t" << numbers << endl;
    ptr = numbers;
    // ptr = &numbers;
    // ptr = &numbers[0];

    for(int i = 0; i < sizeof(numbers)/sizeof(int); i++) {
        cout << "*ptr: " << *(ptr) << endl;
        ptr++;
    }

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

    return 0;
}