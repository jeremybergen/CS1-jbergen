#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    // size_t foxIdx;
    // string newStr;
    
    string phrase = "The quick brown fox jumps over the lazy dog.";
    string words[phrase.length()];

    string tmpWord = "";
    size_t counter = 0;

    // First iteration:
    // for(auto it = phrase.begin(); it != phrase.end(); it++) {
    //     if(*it == ' ') {
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
    for(size_t i = 0; i < phrase.length(); i++) {
        size_t foundIdx = phrase.find(" ", i);
        // cout << "DEBUG: foundIdx: " << foundIdx << endl;
        if(foundIdx == string::npos) {
            tmpWord = phrase.substr(i);
            words[counter] = tmpWord;
            counter++;
            break;
        }
        tmpWord = phrase.substr(i, foundIdx-i);
        words[counter] = tmpWord;
        counter++;
        // cout << "DEBUG: counter: " << counter << endl;
        tmpWord.clear();
        i = foundIdx;
    }

    for(size_t i = 0; i < counter; i++) {
        cout << "DEBUG: words[" << i << "]: " << words[i] << endl;
    }

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
    return 0;
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
