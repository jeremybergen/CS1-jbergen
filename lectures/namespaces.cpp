/*
Name: Jeremy Bergen

namespaces
*/
#include <iostream>

using namespace std;


namespace myNamespace {
    int num1;
    namespace secondNamespace{
        std::string myString;
    }
    int addNums(int n1, int n2) {
        return n1 + n2;
    }
}

namespace myNamespace2 {
    int num1;
}

using namespace myNamespace;
using namespace myNamespace2;

int main(int argc, char *argv[]) {
    cout << "Hello World" << endl;

    myNamespace::num1 = 42;
    myNamespace2::num1 = 15;

    cout << "num1: " << myNamespace::num1 << endl;
    cout << "num1: " << myNamespace2::num1 << endl;

    myNamespace::secondNamespace::myString = "Jeremy";

    cout << addNums(42, 15) << endl;

    return 0;
}