/*
Name: Jeremy Bergen

Palindrome Checker
*/
#include <iostream>
#include <string>
#include <cassert>

using namespace std;

string promptName();
void greetName(string);
void getPhrase(string&);
bool checkPalin(string);
void sanitizePhrase(string&);
void test();

int main(int argc, char *argv[]) {
    string phrase;
    bool isPalindrome;

    if(argc == 2 && (string)argv[1] == "test") {
        test();
        return 0;
    }

    greetName(promptName());
    getPhrase(phrase);
    isPalindrome = checkPalin(phrase);

    if(isPalindrome) {
        cout << phrase << " is a palindrome!" << endl;
    } else {
        cout << phrase << " is NOT a palindrome!" << endl;
    }

    return 0;
}

void test() {
    string phrase = "Tacocat";
    sanitizePhrase(phrase);
    assert(phrase == "tacocat");

    phrase = "A man, a plan, a canal Panama";
    sanitizePhrase(phrase);
    assert(phrase == "amanaplanacanalpanama");

    phrase = "#@$%$#@%#@$#@!$#@$!#$@a";
    sanitizePhrase(phrase);
    assert(phrase == "a");

    cout << "All test cases passed!" << endl;
}

void sanitizePhrase(string& phrase) {
    for(size_t i = 0; i < phrase.length(); i++) {
        if((phrase[i] >= 'A' && phrase[i] <= 'Z') || (phrase[i] >= 'a' && phrase[i] <= 'z')) {
            phrase[i] = tolower(phrase[i]);
        } else {
            phrase.erase(i, 1);
            i--;
        }
    }
}

bool checkPalin(string phrase) {
    string reversePhrase = "";

    // cout << "DEBUG: phrase:\t" << phrase << endl;
    sanitizePhrase(phrase);
    if(phrase.empty()) return false;
    // cout << "DEBUG: sPhrase:\t" << phrase << endl;

    // for(auto it = phrase.rbegin(); it != phrase.rend(); it++) {
    //     reversePhrase += *it;
    // }

    size_t pLength = phrase.length();
    for(size_t i = 0; i < pLength/2; i++) {
        if(phrase[i] != phrase[pLength-i-1]) {
            return false;
        }
    }

    // cout << "DEBUG: phrase:\t" << phrase << endl;
    // cout << "DEBUG: rphrase:\t" << reversePhrase << endl;

    // return (phrase == reversePhrase);
    return true;
}

void getPhrase(string& phrase) {
    cout << "Enter a phrase to check: " << endl;
    getline(cin, phrase);
}

string promptName() {
    string name;
    cout << "Please enter your name: ";
    getline(cin, name);
    return name;
}

void greetName(string name) {
    cout << "Welcome " << name << " to our palindrome checker." << endl;
}