/*
Name: Jeremy Bergen

Structures
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>

using namespace std;

struct Node {
    string data;
    Node *next;
    // Node *prev;
};

void printList(Node *);

int main(int argc, char **argv) {
    // int nums[5] = {1, 2, 3, 4, 5};

    // nums[10] = 42;
    Node *node1 = new Node();
    Node *node2 = new Node();
    Node *node3 = new Node();
    Node *node4 = new Node();

    node1->data = "This";
    node1->next = node2;

    node2->data = "is";
    node2->next = node3;

    node3->data = "a";
    node3->next = node4;

    node4->data = "phrase";
    node4->next = NULL;

    // cout << node1->data << " " << node1->next->data << " " << node1->next->next->data << " " << node1->next->next->next->data;

    printList(node1);

    Node *node5 = new Node();
    node5->data = "also";
    node5->next = NULL;
    node4->next = node5;

    printList(node1);

    node2->next = node4;

    printList(node1);

    delete node1;
    delete node2;
    delete node3;
    delete node4;
    delete node5;
    return 0;
}

void printList(Node *head) {
    Node *tmpNode = head;
    while(tmpNode != NULL) {
        cout << tmpNode->data;
        if(tmpNode->next != NULL) {
            cout << " ";
        }
        tmpNode = tmpNode->next;
    }
    cout << endl;
}









    // Point *point1 = new Point({0, 0});
    // Point *point2 = new Point({42});

    // // point1->x = 0;
    // // point1->y = 0;

    // point2->x = 1;
    // point2->y = 1;

    // cout << "The distance between (" << point1->x << ", " << point1->y << ") and ("
    //      << point2->x << ", " << point2->y << ") is: "
    //      << sqrt(pow(point1->x - point2->x, 2) + pow(point1->y - point2->y, 2)) << endl;

    // delete point1;
    // delete point2;




















// template <class T1>
// struct Cylinder {
//     T1 height;
//     T1 radius;
//     T1 area;
//     T1 volume;

//     void calcArea() {
//         area = pow(radius, 2) * M_PI;
//     }

//     void calcVolume() {
//         volume = area * height;
//     }
// };

// string getName();
// void welcomeName();

// template <class T1>
// void getHeight(Cylinder<T1>&);

// template <class T1>
// void getRadius(Cylinder<T1>&);

// int main(int argc, char **argv) {
//     Cylinder <float> cylind1;

//     welcomeName();

//     getHeight<float>(cylind1);
//     getRadius<float>(cylind1);

//     cylind1.calcArea();
//     cylind1.calcVolume();

//     // printf("Your cylinder with height %d and radius %d has a volume of %d\n", cylind1.height, cylind1.radius, cylind1.volume);
//     cout << "Your cylinder with height " << cylind1.height
//          << " and radius " << cylind1.radius
//          << " has a volume of " << cylind1.volume << endl;

//     return 0;
// }

// template <class T1>
// void getHeight(Cylinder<T1>& tCylinder) {
//     cout << "Please enter the height: ";
//     cin >> tCylinder.height;
// }

// template <class T1>
// void getRadius(Cylinder<T1>& tCylinder) {
//     cout << "Please enter the radius: ";
//     cin >> tCylinder.radius;
// }

// string getName() {
//     string name;
//     getline(cin, name);
//     return name;
// }

// void welcomeName() {
//     string name;
//     cout << "Welcome to our cylinder calculator. Please enter your name: ";
//     name = getName();
//     cout << "Welcome " << name << "." << endl;
// }























// struct Vector {
//     int x, y, z;
// };

// struct Point {
//     // private:
//     int something;
//     int x;
//     int y;
//     int z;
//     long someLong;
//     float someFloat;

//     int nums[10][10][10][10][10];

//     Vector newVector;

//     void sayHello() {
//         cout << "Hello" << endl;
//     }

//     void subStr(int start, int length) {
//         string someStr = "The quick brown fox jumps over the lazy dog.";
//         cout << someStr.substr(start, length) << endl;
//     }

//     // string name;

//     // public:
//     // int getX();
//     // void setX(int);

//     // int getX() {
//     //     return x;
//     // }

//     // void setX(int tmpX) {
//     //     this->x = tmpX;
//     // }
// };

// int main(int argc, char *argv[]) {
//     // int x1, x2, y1, y2;
//     // int x[10];
//     // int y[10];
//     Point point1;
//     Point point2;
//     Point *point3 = new Point;
//     Point points[2];

//     Point* ptr;
//     int* intPtr;

//     // point1.setX(42);
//     // cout << "point1 x: " << point1.getX() << endl;

//     // point1.name = "origin";
//     point1.x = 0;
//     point1.y = 0;
//     point1.nums[0][0][0][0][0] = 15;
//     point1.nums[0][0][0][0][1] = -123;

//     cout << "point1.nums[0]: " << point1.nums[0][0][0][0][0] << endl;
//     // point1.something = 123;

//     point2.x = 1;
//     point2.y = 1;

//     cout << "&point1: " << &point1 << endl;
//     cout << "sizeof(point1): " << sizeof(point1) << endl;
//     cout << "&point2: " << &point2 << endl;
//     cout << "sizeof(point2): " << sizeof(point2) << endl;

//     points[0] = point1;
//     points[1] = point2;

//     ptr = points;
//     intPtr = &points[0].x;
//     cout << "ptr->x: " << *intPtr << endl;
//     cout << "ptr->y: " << ptr->y << endl;

//     ptr++;
//     cout << "ptr->x: " << ptr->x << endl;
//     cout << "ptr->y: " << ptr->y << endl;

//     ptr++;
//     cout << "ptr->x: " << ptr->x << endl;
//     cout << "ptr->y: " << ptr->y << endl;

//     point1.newVector.x = 8;
//     // ptr = &point1.x;
//     // cout << "*ptr: " << *ptr << endl;
//     // ptr++;
//     // cout << "*ptr: " << *ptr << endl;

//     // Point::Vector vector1;

//     // vector1.x = 8;
//     // Point::Vector vector1; NOT RIGHT....


//     point3->x = 42;
//     point3->y = -9000;
//     cout << "point3->x: " << point3->x << endl;
//     cout << "point3->y: " << point3->y << endl;

//     cout << "The distance between: (" 
//          << point1.x << ", " << point1.y << ") and (" 
//          << point2.x << ", " << point2.y << ") is: "
//          << sqrt(pow(point1.x - point2.x, 2) + pow(point1.y - point2.y, 2)) << endl;

//     point1.sayHello();

//     point1.subStr(5, 10);

//     delete point3;

//     return 0;
// }