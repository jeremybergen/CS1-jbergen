/*
Name: Jeremy Bergen

HW8
*/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <typeinfo>

using namespace std;

int main(int argc, char *argv[]) {
    char* str1;

    cout << typeid(str1).name() << endl;
    // ifstream fin;
    // ofstream fout;

    // fin.open("csci112in");
    // fout.open("csci112out");

    // while(!fin.eof()) {
    //     string fName, lName;
    //     int test1, test2, test3, test4;

    //     fin >> fName >> lName >> test1 >> test2 >> test3 >> test4;

    //     printf("DEBUG: %s, %s, %d, %d, %d, %d\n", fName.c_str(), lName.c_str(), test1, test2, test3, test4);
    // }

    // fin.close();
    // fout.close();
    return 0;
}