/*
Name: Jeremy Bergen

Vectors
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

void printWords(vector<string>&);
void printEveryOtherWord(vector<string>&);
void splitString(vector<string>&, string&);

int main(int argc, char * argv[]) {
    string inputString;

    vector<string> words;

    cout << "Enter a phrase: ";
    getline(cin, inputString);

    splitString(words, inputString);
    printWords(words);

    cout << "-------------------" << endl;
    printEveryOtherWord(words);

    return 0;
}

void printEveryOtherWord(vector<string>& words) {
    for(size_t i = 0; i < words.size(); i += 2) {
        // if(i%2 == 0) {
        cout << words.at(i) << endl;
        // }
    }
}

void printWords(vector<string>& words) {
    for(auto it = words.begin(); it != words.end(); it++) {
        cout << *it << endl;
    }
}

void splitString(vector<string>& words, string& inputString) {
    string tmpStr;
    stringstream iss;
    iss.str(inputString);

    while(getline(iss, tmpStr, ' ')) {
        words.push_back(tmpStr);
    }

}










// struct MyData {
//     int n1, n2, n3;
//     string str1, str2, str3;
//     long l1, l2, l3;
//     int numbers[1000];
// };

// template <class T1>
// void printVector(vector<T1>*);

// vector<int> buildVector();



    // vector<int> myVector;
    // // vector<float> myVector = {42.5, 15.32, 23.1532, 9000.12321321, -123.1};
    // // vector<float> *myVector = new vector<float>({42.5, 15.32, 23.1532, 9000.12321321, -123.1});
    // // vector<MyData> myDataVector;

    // // // myDataVector.push_back({42, 15, 23, "Jeremy", "Bergen", "The Almighty Tallest", 123421, 1232121321, 1231231});
    // // // printVector<MyData>(myDataVector);

    // // printVector<float>(myVector);
    // myVector = buildVector();
    // printVector<int>(&myVector);


// vector<int> buildVector() {
//     vector<int> newVector;

//     newVector.push_back(98432);
//     newVector.push_back(43782);

//     return newVector;
// }

// template <class T1>
// void printVector(vector<T1>* vec1) {
//     for(auto it = vec1->begin(); it != vec1->end(); it++) {
//         cout << *it << endl;
//     }
// }











    // int numbers[5] = {42, 15, 23, 9000, -15};
    // int* numbers2;

    // numbers2 = numbers;

    // DOESN'T WORK
    // numbers2 = numbers;
    // for(int i = 0; i < 5; i++) {
    //     numbers2[i] = numbers[i];
    // }

    // vector<int> *myVector = new vector<int>;
    // vector<int> myVector2;
    // string myString = "";

    // // cout << boolalpha << myVector->empty() << endl;

    // myVector->push_back(42);

    // // cout << boolalpha << myVector->empty() << endl;

    // // myVector->clear();
    // // cout << boolalpha << myVector->empty() << endl;
    // myVector->push_back(15);
    // myVector->push_back(23);
    // myVector->push_back(9000);
    // myVector->push_back(-15);
    // myVector->push_back(2);
    // myVector->push_back(2);
    // myVector->push_back(2);
    // myVector->push_back(2);

    // myVector->insert(myVector->end()-4, 1234567);

    // for(auto it = myVector->begin(); it != myVector->end(); it++) {
    //     cout << *it << endl;
    // }
    // myVector->reserve(100);

    // // myVector2 = myVector;

    // // myVector.at(2) = 12345;

    // // cout << "myVector.max_size(): " << myVector.max_size() << endl;
    // cout << "myVector.capacity(): " << myVector->capacity() << endl;

    // // myVector->push_back(2);
    // // myVector->push_back(2);
    // // myVector->push_back(2);
    // // myVector->push_back(2);
    // // cout << &myVector.at(0) << endl;
    // // cout << &myVector.at(1) << endl;
    // // cout << &myVector.at(2) << endl;
    // // cout << &myVector.at(3) << endl;
    // cout << &myVector->at(0) << endl;
    // cout << "--------------" << endl;

    // myVector->push_back(15);
    // myVector->push_back(23);
    // myVector->push_back(9000);
    // myVector->push_back(-15);
    // myVector->push_back(2);
    // myVector->push_back(2);
    // myVector->push_back(2);
    // myVector->push_back(2);
    // myVector->reserve(100);
    // for(size_t i = 0; i < 100; i++) {
    //     cout << &myVector->at(i) << endl;
    // }
    
    
    

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
