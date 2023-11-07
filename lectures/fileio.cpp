/*
Name: Jeremy Bergen

File I/O
*/
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) {
    string tmpString;
    fstream fs;
    // fstream fs2;
    // size_t imgSize = 0;
    char *buffer = new char[10];

    fs.open("files/input.csv", ios_base::in | ios_base::out);

    fs.read(buffer, 10);

    cout << "buffer: " << buffer << endl;

    fs.read(buffer, 10);

    cout << "buffer: " << buffer << endl;

    cout << "Enter 10 characters: ";
    getline(cin, tmpString);

    fs.seekg(fs.tellg()-10);
    // fs2.open("files/copycat.jpg", ios_base::out | ios_base::binary);

    // cout << fs.tellg() << endl;
    // imgSize = fs.tellg();

    // char *image = new char[imgSize];

    // fs.seekg(0);

    // fs.read(image, imgSize);

    // fs2.write(image, imgSize);

    fs.close();
    delete[] buffer;
    // fs2.close();
    // delete[] image;
    return 0;
}























// #include <iostream>
// #include <fstream>
// #include <string>
// #include <ctime>
// #include <vector>
// #include <sstream>
// #include <iomanip>
// // #include <unistd.h>

// using namespace std;

// const int padding = 2;

// struct Person {
//     string fName;
//     string lName;
//     string title;
//     int favNum;
// };

// void readPeople(ifstream&, size_t&, size_t&, size_t&, size_t&, vector<Person>&);
// void writePeople(vector<Person>&, size_t, size_t, size_t, size_t, ofstream&);

// int main(int argc, char* argv[]) {
//     // cout << "\033[7;35mbold red text\033[0m" << endl;
//     // cout << "This is a test";
//     // while(1) {
//     //     cout << "This is text\r     ";
//     //     // sleep(1);
//     //     cout << "\r";
//     //     cout << "            ";
//     //     // sleep(1);
//     // }
//     ifstream fin;
//     ofstream fout;
    
//     vector<Person> people;
//     size_t fNameW = 7;
//     size_t lNameW = 7;
//     size_t titleW = 6;
//     size_t favNumW = 8;
    

//     fin.open("files/input.csv");
//     fout.open("files/output.txt");

//     readPeople(fin, fNameW, lNameW, titleW, favNumW, people);

//     writePeople(people, fNameW, lNameW, titleW, favNumW, fout);

//     fin.close();
//     fout.close();
//     return 0;
// }

// void readPeople(ifstream& fin, size_t& fNameW, size_t& lNameW, size_t& titleW, size_t& favNumW, vector<Person>& people) {
//     string tmpString;
//     while(!fin.eof()) {
//         int counter = 0;
//         Person newPerson;
//         string splitString;
//         stringstream iss;

//         getline(fin, tmpString);
//         // cout << "DEBUG: tmpString: " << tmpString << endl;
//         iss.str(tmpString);

//         while(getline(iss, splitString, ',')) {
//             // cout << "DEBUG: splitString: " << splitString << endl;
//             // // getline(fin, tmpString, ',');
//             // cout << "DEBUG: counter: " << counter << endl;
//             // cout << "DEBUG: tmpString: " << tmpString << endl;
//             if(counter == 0) {
//                 newPerson.fName = splitString;
//                 if(splitString.length() + padding > fNameW) {
//                     fNameW = splitString.length() + padding;
//                 }
//             } else if (counter == 1) {
//                 newPerson.lName = splitString;
//                 if(splitString.length() + padding > lNameW) {
//                     lNameW = splitString.length() + padding;
//                 }
//             } else if (counter == 2) {
//                 newPerson.title = splitString;
//                 if(splitString.length() + padding > titleW) {
//                     titleW = splitString.length() + padding;
//                 }
//             } else {
//                 newPerson.favNum = atoi(splitString.c_str());
//                 if(splitString.length() + padding > favNumW) {
//                     favNumW = splitString.length() + padding;
//                 }
//             }
            
//             counter++;
//         }
//         people.push_back(newPerson);
//     }
// }

// void writePeople(vector<Person>& people, size_t fNameW, size_t lNameW, size_t titleW, size_t favNumW, ofstream& fout) {
//     fout << left;
//     fout << setw(fNameW) << "fName" << setw(lNameW) << "lName" << setw(titleW) << "title" << setw(favNumW) << "favNum" << endl;
//     fout << setfill('=') << setw(fNameW + lNameW + titleW + favNumW) << "" << endl;
//     fout << setfill(' ');
//     for(auto i : people) {
//         // cout << i.fName << endl;
//         fout << setw(fNameW) << i.fName << setw(lNameW) << i.lName << setw(titleW) << i.title << setw(favNumW) << i.favNum << endl;
//     }
// }







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