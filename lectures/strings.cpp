#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
    string fName;
    string lName;
    string fullName;

    fName = "Jeremy";
    lName = "Bergen";

    fullName = fName + " " + lName;

    cout << "Hello " << fullName << endl;

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

    for(char it : fullName) {
        cout << it << endl;
    }

    // cout << "The first character in fullName is: " << fullName[0] << endl;
    // cout << "The size of fullName[0]: " << sizeof(fullName[0]) << endl;
    return 0;
}