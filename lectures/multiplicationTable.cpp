/*
Name: Jeremy Bergen

Multiplication Table Printer

  1  2
1 1  2
2 2  4
*/
#include <iostream>
#include <string>
#include <cassert>
#include <cmath>
#include <iomanip>

using namespace std;

int getSize();
void printTable(unsigned int);

int main(int argc, char * argv[]) {
    unsigned int tableSize = 0;

    tableSize = getSize();
    printTable(tableSize);
    
    return 0;
}

void printTable(unsigned int tSize) {
    int colW = 4;
    unsigned int i = 1;
    cout << left;

    cout << setw(colW+1) << "";
    // for(size_t i = 1; i <= tSize; i++) {
    while(i <= tSize) {
        cout << setw(colW) << i;
        i++;
    }
    cout << endl;

    // cout << setfill('=');
    // cout << setw(colW+1) << "";
    // for(size_t i = 1; i <= (tSize+1)*colW; i++) {
    i = 1;
    while(i <= (tSize+1)*colW) {
        // cout << "DEBUG: inside loop i: " << i << endl;
        cout << "=";
        i++;
    }
    // cout << "DEBUG: after = printout i: " << i << endl;
    cout << endl;
    // cout << setfill(' ');

    i = 1;
    // for(size_t i = 1; i <= tSize; i++) {
    while(i <= tSize) {
        // cout << 1*i << " ";
        cout << setw(colW) << i << "|";
        unsigned int j = 1;
        // for(size_t j = 1; j <= tSize; j++) {
        while(j <= tSize) {
            cout << setw(colW) << j*i;
            j++;
        }
        cout << endl;
        i++;
    }
    cout << endl;
}

int getSize() {
    int tSize;
    cout << "Please enter the size of our multiplication table: ";
    cin >> tSize;

    return tSize;
}