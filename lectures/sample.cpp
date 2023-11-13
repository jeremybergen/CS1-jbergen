#include <iostream>
#include <cassert>

using namespace std;

// const double epsilon = 0.00001;
const double epsilon = 10;

template <class T1, class T2, class T3>
void addNums(const T1&, const T2&, T3&);
void test();

int main() {
    char calcType;
    cout << "Enter type to calculate [i, f, d, l]: ";
    cin >> calcType;
    test();
    switch(calcType) {
        case 'i':
        {
            int n1, n2, result;
            cin >> n1 >> n2;
            addNums<int, int, int>(n1, n2, result);
            cout << "result: " << result << endl;
            break;
        }
        case 'd':
        {
            double n1, n2, result;
            cin >> n1 >> n2;
            addNums<double, double, double>(n1, n2, result);
            cout << "result: " << result << endl;
            break;
        }
        default:
            break;
    // double result;
    // int bob, alice;

    

    // bob = 42;
    // alice = 15;

    // addNums(42, 15, result);
    }

    // cout << result << endl;
    // cout << "n1: " << bob << endl;
    // cout << "n2: " << alice << endl;
    return 0;
}

void test() {
    double answer;
    addNums<int, int, double>(42, 15, answer);
    assert(answer == 2.8);

    addNums<int, int, double>(1, 3, answer);
    assert(abs(answer - 0.33333) <= epsilon);
    cout << "All test cases passed" << endl;
}

template <class T1, class T2, class T3>
void addNums(const T1& n1, const T2& n2, T3& answer) {
    answer = n1 / n2;
    // return n1 + n2;
}