/*
Name: Jeremy Bergen

Random Final Presenter
*/
#include <iostream>
#include <string>
#include <fstream>
#include <random>
#include <sstream>

using namespace std;

struct Presenter {
    string fName, lName;
};

int countLines(fstream&);
void readPeople(fstream&, Presenter[], int);
int chooseRandom(int);
int printPresenter(Presenter[], int);
void writePeople(fstream&, Presenter[], int, int);

int main(int argc, char* argv[]) {
    srand(time(0));
    int numLines = 0;
    int randPresent = 0;
    fstream fs;
    fs.open("names.txt", ios_base::in | ios_base::out);

    numLines = countLines(fs);

    Presenter presenters[numLines];

    // cout << "DEBUG: fs.tellg(): " << fs.tellg() << endl;
    readPeople(fs, presenters, numLines);

    randPresent = printPresenter(presenters, numLines);
    fs.close();

    fs.open("names.txt", ios_base::out);

    writePeople(fs, presenters, numLines, randPresent);

    // for(int i = 0; i < numLines; i++) {
    //     cout << "DEBUG: presenters[" << i << "].fName: " << presenters[i].fName << endl;
    // }
    // cout << "DEBUG: numLines: " << numLines << endl;

    fs.close();
    return 0;
}

void writePeople(fstream& fs, Presenter presenters[], int numLines, int randPresent) {
    for(int i = 0; i < numLines; i++) {
        if(i == randPresent) continue;
        fs << presenters[i].lName << ", " << presenters[i].fName;
        if(i != numLines - 1 && (randPresent != numLines - 1 || i != numLines - 2)) {
            fs << endl;
        }
    }
}

int chooseRandom(int numLines) {
    return rand()%numLines;
}

int printPresenter(Presenter presenters[], int numLines) {
    int randPresent = chooseRandom(numLines);
    // for(int i = 0; i < numLines; i++) {
    //     cout << "DEBUG: presenters[" << i << "].fName: " << presenters[i].fName << endl;
    // }
    // cout << "DEBUG: randPresent: " << randPresent << endl;

    cout << "The next victim, I mean presenter, is...drumroll (don't say drumroll)..."
         << presenters[randPresent].fName << " " << presenters[randPresent].lName << "." << endl;
    return randPresent;
}

void readPeople(fstream& fs, Presenter presenters[], int numLines) {
    string inputLine;
    int counter = 0;
    while(!fs.eof() && getline(fs, inputLine)) {
        Presenter newPresenter;
        string tmpStr;

        stringstream iss;
        iss.str(inputLine);

        int strCounter = 0;
        while(getline(iss, tmpStr, ',')) {
            if(strCounter == 0) newPresenter.lName = tmpStr;
            if(strCounter == 1) newPresenter.fName = tmpStr.substr(1);
            strCounter++;
        }
        // cout << "DEBUG: newPresenter.fName: " << newPresenter.fName << " " << "newPresenter.lName: " << newPresenter.lName << endl;;
        presenters[counter] = newPresenter;

        counter++;
    }
    fs.seekg(0);
    // cout << "DEBUG: fs.tellg(): " << fs.tellg() << endl;
}

int countLines(fstream& fs) {
    int lineCounter = 0;
    string tmpLine;
    while(!fs.eof() && getline(fs, tmpLine)) {
        lineCounter++;
    }
    // fs.clear();
    fs.seekg(0);
    return lineCounter;
}