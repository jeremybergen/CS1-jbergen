/*
Name: Jeremy Bergen

File I/O
*/
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main(int argc, char* argv[]) {
    ifstream fin;
    ofstream fout;
    int tmpNum;

    //https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
    time_t now = time(0);
    char* dt = ctime(&now);

    // Windows absolute path
    // fin.open("c:\\home\\jbergen\\projects\\CS1-jbergen\\files\\input.txt");
    // Linux absolute path
    // fin.open("/home/jbergen/projects/CS1-jbergen/files/input.txt");
    fin.open("../files/input.txt");
    // fout.open("/home/jbergen/projects/CS1-jbergen/files/output.txt");
    string outFile = "../files/output_" + (string) dt + ".txt";
    fout.open(outFile, fstream::app);

    // for(int i = 0; i < 5; i++) {
    //     fin >> tmpNum;
    //     fout << tmpNum << endl;
    // }
    while(fin >> tmpNum) {
        fout << tmpNum << endl;
    }
    // fin >> tmpNum;

    // fout << tmpNum << endl;

    // fin >> tmpNum;

    // fout << tmpNum << endl;

    // fin >> tmpNum;

    // fout << tmpNum << endl;

    // fin >> tmpNum;

    // fout << tmpNum << endl;

    // fin >> tmpNum;

    // fout << tmpNum;

    // while(true) {

    // }

    fin.close();
    fout.close();

    return 0;
}