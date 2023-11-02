/*
Name: Jeremy Bergen

File I/O
*/
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include <sstream>

using namespace std;

struct Person {
    string fName;
    string lName;
    string title;
    int favNum;
};

int main(int argc, char* argv[]) {
    ifstream fin;
    ofstream fout;
    string tmpString;
    vector<Person> people;
    

    fin.open("files/input.csv");
    fout.open("files/output.txt");

    while(!fin.eof()) {
        int counter = 0;
        Person newPerson;
        string splitString;
        stringstream iss;

        getline(fin, tmpString);
        // cout << "DEBUG: tmpString: " << tmpString << endl;
        iss.str(tmpString);

        while(getline(iss, splitString, ',')) {
            // cout << "DEBUG: splitString: " << splitString << endl;
            // // getline(fin, tmpString, ',');
            // cout << "DEBUG: counter: " << counter << endl;
            // cout << "DEBUG: tmpString: " << tmpString << endl;
            if(counter == 0) {
                newPerson.fName = splitString;
            } else if (counter == 1) {
                newPerson.lName = splitString;
            } else if (counter == 2) {
                newPerson.title = splitString;
            } else {
                newPerson.favNum = atoi(splitString.c_str());
            }
            
            counter++;
        }
        people.push_back(newPerson);
    }

    for(auto i : people) {
        cout << i.fName << endl;
    }

    fin.close();
    fout.close();
    return 0;
}







    // ifstream fin;
    // ofstream fout;
    // int tmpNum;

    // //https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
    // time_t now = time(0);
    // char* dt = ctime(&now);

    // // Windows absolute path
    // // fin.open("c:\\home\\jbergen\\projects\\CS1-jbergen\\files\\input.txt");
    // // Linux absolute path
    // // fin.open("/home/jbergen/projects/CS1-jbergen/files/input.txt");
    // fin.open("../files/input.txt");
    // // fout.open("/home/jbergen/projects/CS1-jbergen/files/output.txt");
    // string outFile = "../files/output_" + (string) dt + ".txt";
    // fout.open(outFile, fstream::app);

    // // for(int i = 0; i < 5; i++) {
    // //     fin >> tmpNum;
    // //     fout << tmpNum << endl;
    // // }
    // while(fin >> tmpNum) {
    //     fout << tmpNum << endl;
    // }
    // // fin >> tmpNum;

    // // fout << tmpNum << endl;

    // // fin >> tmpNum;

    // // fout << tmpNum << endl;

    // // fin >> tmpNum;

    // // fout << tmpNum << endl;

    // // fin >> tmpNum;

    // // fout << tmpNum << endl;

    // // fin >> tmpNum;

    // // fout << tmpNum;

    // // while(true) {

    // // }

    // fin.close();
    // fout.close();