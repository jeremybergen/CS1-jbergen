#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

struct Strings {
    int test1;
    string fName;
};

int main(int argc, char *argv[]) {
    int counter = 0;
    ifstream fin;
    fin.open("input.txt");

    // while(!fin.eof()) {
    //     char ch;
    //     // fin >> ch;
    //     fin.get(ch);
    //     counter++;
    // }
    // counter = fin.tellg();

    while(!fin.eof()) {
        string tmpStr;
        getline(fin, tmpStr);
        counter++;
    }

    fin.seekg(0);

    Strings myStrings[counter];

    cout << "DEBUG: counter: " << counter << endl;

    fin.close();
    return 0;
}






















    // int arrSize = 5;
    // Strings *strs = new Strings[arrSize];
    // // vector<Strings> strs;

    // cout << "strs: " << strs << endl;
    // for(int i = 0; i < arrSize; i++) {
    //     cout << "&strs[" << i << "]: " << &strs[i] << endl;
    //     cout << "&strs[" << i << "].test1: " << &strs[i].test1 << endl;
    //     cout << "&strs[" << i << "].fName: " << &strs[i].fName << endl;
        
    // }

    // for(int i = 0; i < arrSize; i++) {
    //     // Strings tmpStr;
    //     string firstName;

    //     cout << "Enter the first name: ";
    //     cin >> firstName;
    //     strs[i].fName = firstName;

    //     cout << "Enter the test value: ";
    //     cin >> strs[i].test1;

    //     // strs.push_back(tmpStr);
    // }

    // for(int i = 0; i < arrSize; i++) {
    //     cout << strs[i].fName << ", test: " << strs[i].test1 << endl;
    // }
    // // Strings str1;
    // // Strings *str2 = new Strings();

    // // str1.fName = "Jeremy";
    // // str1.test1 = 42;

    // // str2->fName = "Bob";
    // // str2->test1 = 9;

    // // delete str2;
    // delete[] strs;