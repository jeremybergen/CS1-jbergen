/*
Name: Jeremy Bergen

Prime Number Checker
*/
#include <iostream>

using namespace std;

unsigned int getNum();
bool checkPrime(unsigned int);

int main(int argc, char *argv[]) {
    unsigned int number;
    bool isPrime;

    number = getNum();
    isPrime = checkPrime(number);

    // cout << boolalpha << isPrime << endl;
    if(isPrime) {
        cout << number << " is prime." << endl;
    } else {
        cout << number << " is NOT prime" << endl;
    }
    
    return 0;
}

bool checkPrime(unsigned int num) {
    if(num < 2) return false;
    if(num == 2) return true;
    for(size_t i = 2; i < num/2; i += 2) {
        if(num%i == 0) {
            return false;
        }
    }
    return true;
}

unsigned int getNum() {
    unsigned int num;
    cout << "Please enter a number to check if it is prime: ";
    cin >> num;

    return num;
}