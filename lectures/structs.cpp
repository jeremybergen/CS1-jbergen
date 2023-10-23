/*
Name: Jeremy Bergen

Structures
*/
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct Vector {
    int x, y, z;
};

struct Point {
    // private:
    int something;
    int x;
    int y;
    int z;
    long someLong;
    float someFloat;

    int nums[10][10][10][10][10];

    Vector newVector;

    void sayHello() {
        cout << "Hello" << endl;
    }

    void subStr(int start, int length) {
        string someStr = "The quick brown fox jumps over the lazy dog.";
        cout << someStr.substr(start, length) << endl;
    }

    // string name;

    // public:
    // int getX();
    // void setX(int);

    // int getX() {
    //     return x;
    // }

    // void setX(int tmpX) {
    //     this->x = tmpX;
    // }
};

int main(int argc, char *argv[]) {
    // int x1, x2, y1, y2;
    // int x[10];
    // int y[10];
    Point point1;
    Point point2;
    Point *point3 = new Point;
    Point points[2];

    Point* ptr;
    int* intPtr;

    // point1.setX(42);
    // cout << "point1 x: " << point1.getX() << endl;

    // point1.name = "origin";
    point1.x = 0;
    point1.y = 0;
    point1.nums[0][0][0][0][0] = 15;
    point1.nums[0][0][0][0][1] = -123;

    cout << "point1.nums[0]: " << point1.nums[0][0][0][0][0] << endl;
    // point1.something = 123;

    point2.x = 1;
    point2.y = 1;

    cout << "&point1: " << &point1 << endl;
    cout << "sizeof(point1): " << sizeof(point1) << endl;
    cout << "&point2: " << &point2 << endl;
    cout << "sizeof(point2): " << sizeof(point2) << endl;

    points[0] = point1;
    points[1] = point2;

    ptr = points;
    intPtr = &points[0].x;
    cout << "ptr->x: " << *intPtr << endl;
    cout << "ptr->y: " << ptr->y << endl;

    ptr++;
    cout << "ptr->x: " << ptr->x << endl;
    cout << "ptr->y: " << ptr->y << endl;

    ptr++;
    cout << "ptr->x: " << ptr->x << endl;
    cout << "ptr->y: " << ptr->y << endl;

    point1.newVector.x = 8;
    // ptr = &point1.x;
    // cout << "*ptr: " << *ptr << endl;
    // ptr++;
    // cout << "*ptr: " << *ptr << endl;

    // Point::Vector vector1;

    // vector1.x = 8;
    // Point::Vector vector1; NOT RIGHT....


    point3->x = 42;
    point3->y = -9000;
    cout << "point3->x: " << point3->x << endl;
    cout << "point3->y: " << point3->y << endl;

    cout << "The distance between: (" 
         << point1.x << ", " << point1.y << ") and (" 
         << point2.x << ", " << point2.y << ") is: "
         << sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2)) << endl;

    point1.sayHello();

    point1.subStr(5, 10);

    delete point3;

    return 0;
}