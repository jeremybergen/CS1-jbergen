#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void splitPhrase(string, string[], size_t, char, size_t&);

int main(int argc, char *argv[]) {
    // size_t foxIdx;
    // string newStr;
    
    // string phrase = "The quick brown fox jumps over the lazy dog.";
    string phrase = "The cow jumped over the moon";
    size_t arrSize = phrase.length();
    string* words = new string[arrSize];



    char delimiter = ' ';
    string inputDelim = " ";
    size_t counter = 0;

    // cout << "What charater to do you want to split on: ";
    // cin >> delimiter;
    getline(cin, inputDelim);
    delimiter = inputDelim.at(0);

    splitPhrase(phrase, words, arrSize, delimiter, counter);

    // for(size_t i = 0; i < 9; i++) {
    //     string tmpWord;
    //     iss >> tmpWord;
    //     cout << "DEBUG: tmpWord: " << tmpWord << endl;
    // }

    for(size_t i = 0; i < counter; i++) {
        if(words[i] == "") {
            continue;
        }
        // cout << "DEBUG: words[" << i << "]: " << words[i] << endl;
        cout << words[i] << endl;
    }

    // while(words[counter] != "defaultWord") {
    //     cout << "DEUBG: words[counter]: " << words[counter] << endl;
    //     counter++;
    // }

    // phrase.clear();
    // phrase = "";

    // cout << "phrase: " << phrase << endl;

    // phrase.append("On the end");
    // phrase.push_back('!');
    // phrase.insert(17, 10, '!');

    // cout << "phrase: " << phrase << endl;

    // cout << "phrase.find(\"fox\"): " << phrase.find("fox") << endl;
    // foxIdx = phrase.find("fox");

    // newStr = phrase.substr(foxIdx, 3);

    // cout << "newStr: " << newStr << endl;

    // cout << "phrase.empty(): " << boolalpha << phrase.empty() << endl;
    // cout << "phrase == \"\": " << boolalpha << (phrase == "") << endl;
    delete[] words;
    return 0;
}

void splitPhrase(string phrase, string words[], size_t arrSize, char delim, size_t& counter) {
    string tmpWord = "";
    // size_t counter = 0;


    // First iteration:
    // for(auto it = phrase.begin(); it != phrase.end(); it++) {
    //     if(*it == delim) {
    //         words[counter] = tmpWord;
    //         tmpWord.clear();
    //         counter++;
    //         continue;
    //     }
    //     tmpWord.push_back(*it);
    // }
    // words[counter] = tmpWord;
    // tmpWord.clear();
    // counter++;
    

    // Second iteration:
    // for(size_t i = 0; i < phrase.length(); i++) {
    //     size_t foundIdx = phrase.find(delim, i);
    //     // cout << "DEBUG: foundIdx: " << foundIdx << endl;
    //     if(foundIdx == string::npos) {
    //         tmpWord = phrase.substr(i);
    //         words[counter] = tmpWord;
    //         counter++;
    //         break;
    //     }
    //     tmpWord = phrase.substr(i, foundIdx-i);
    //     words[counter] = tmpWord;
    //     counter++;
    //     // cout << "DEBUG: counter: " << counter << endl;
    //     tmpWord.clear();
    //     i = foundIdx;
    // }

    // Third Iteration:
    stringstream iss;
    iss.str(phrase);

    // while(iss >> tmpWord) {
    while(getline(iss, tmpWord, delim)) {
        words[counter] = tmpWord;
        counter++;
        tmpWord.clear();
    }

}
















    // string fName;
    // string lName;
    // string fullName;

    // fName = "Jeremy";
    // lName = "Bergen";

    // fullName = fName + " " + lName;

    // cout << "Hello " << fullName << endl;

    // fullName[8] = '\0';
    // cout << "DEBUG: fullName: " << fullName.c_str() << endl;

    // cout << "fullName.length(): " << fullName.size() << endl;
    // for(size_t i = fullName.size() - 1; i >= 0; i--) {
    //     if(i == string::npos) {
    //         break;
    //     }
    //     // cout << "DEBUG: i: " << i << endl;
    //     cout << fullName[i];
    // }
    // for(string::iterator it = fullName.end(); it >= fullName.begin(); it--) {
    // for(auto it = fullName.begin(); it != fullName.end(); it++) {
    //     cout << *it << endl;
    // }
    // cout << endl;

    // for(size_t i = 0; i < fullName.length()+10; i++) {
    //     // cout << fullName[i] << " " << fullName.at(i) << endl;
    //     cout << fullName.at(i)<< endl;
    // }

    // cout << (char)(fullName.front()+10) << endl;
    // cout << *(fullName.begin()+1) << endl;

    // for(char it : fullName) {
    //     cout << it << endl;
    // }

    // cout << "The first character in fullName is: " << fullName[0] << endl;
    // cout << "The size of fullName[0]: " << sizeof(fullName[0]) << endl;
