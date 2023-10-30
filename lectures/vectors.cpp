/*
Name: Jeremy Bergen

Vectors
*/
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct MyData {
    int n1, n2, n3;
    string str1, str2, str3;
    long l1, l2, l3;
    int numbers[1000];
};

int main(int argc, char * argv[]) {
    // int numbers[5] = {42, 15, 23, 9000, -15};
    // int* numbers2;

    // numbers2 = numbers;

    // DOESN'T WORK
    // numbers2 = numbers;
    // for(int i = 0; i < 5; i++) {
    //     numbers2[i] = numbers[i];
    // }

    vector<int> myVector;
    vector<int> myVector2;
    string myString = "";

    myVector.push_back(42);
    myVector.push_back(15);
    myVector.push_back(23);
    myVector.push_back(9000);
    myVector.push_back(-15);
    myVector.push_back(2);
    myVector.push_back(2);
    myVector.push_back(2);
    myVector.push_back(2);
    myVector.reserve(100);

    // myVector2 = myVector;

    // myVector.at(2) = 12345;

    // cout << "myVector.max_size(): " << myVector.max_size() << endl;
    cout << "myVector.capacity(): " << myVector.capacity() << endl;

    // cout << "myVector 0: " << myVector[5] << endl;
    // cout << "myVector.at(1): " << myVector.at(5) << endl;

    // cout << myVector.size() << endl;
    // cout << sizeof(myString) << endl;

    // for(size_t i = 0; i < myVector2.size(); i++) {
    //     cout << "myVector2.at(" << i << "): " << myVector2.at(i) << endl;
    // }

    // for(size_t i = myVector.size()-1; i >= 0; i--) {
    //     if(i >= myVector.size()) {
    //         break;
    //     }
    //     cout << "myVector.at(" << i << "): " << myVector.at(i) << endl;
    // }

    // for(std::vector<int>::iterator it = myVector.begin(); it != myVector.end(); it++) {
    //     cout << *it << endl;
    // }

    // for(std::reverse_iterator<std::vector<int>::iterator> it = myVector.rbegin(); it != myVector.rend(); it++) {
    //     cout << *it << endl;
    // }

    // for(auto i : myVector) {
    //     cout << i << endl;
    // }

    return 0;
}