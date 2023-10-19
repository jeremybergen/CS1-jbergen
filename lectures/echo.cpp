#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int numLines;
    

    cin >> numLines;

    string words[numLines];

    for(size_t i = 0; i < numLines; i++) {
        cin >> words[i];
    }

    for(size_t i = 0; i < numLines; i++) {
        if(i%2 == 0) {
            cout << words[i] << endl;
        }
    }

    return 0;
}