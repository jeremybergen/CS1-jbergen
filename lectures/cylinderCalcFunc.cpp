/*
Name: Jeremy Bergen

Cylinder calculator with functions!

1) prompt for name
2) greet user
3) get height and radius
4) calc area circle (area = pi * radius^2)
5) calc volume of cylinder (volume = area * height)
6) print values
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>

using namespace std;

string promptName();
void greetUser(string*);
// float getParameters();
// float getHeight();
// float getRadius();
void getParameters(float&, float&);
float calcArea(float*);
float calcVolume(float*, float*);
void printVals(float*, float*, float*, float*);

int main() {
    string fullName;
    float height, radius;
    float area, volume;

    float* hPtr1;
    float* rPtr1;
    float* aPtr1;
    float* vPtr1;
    string* namePtr;

    hPtr1 = &height;
    rPtr1 = &radius;
    aPtr1 = &area;
    vPtr1 = &volume;
    namePtr = &fullName;

    fullName = promptName();
    greetUser(namePtr);

    getParameters(*hPtr1, *rPtr1);
    // cout << "DEBUG: height: " << height << endl;
    // cout << "DEBUG: radius: " << radius << endl;
    area = calcArea(rPtr1);
    // cout << "DEBUG: area: " << area << endl;
    volume = calcVolume(hPtr1, aPtr1);

    printVals(hPtr1, rPtr1, aPtr1, vPtr1);

    return 0;
}

void printVals(float* height, float* radius, float* area, float* volume) {
    printf("Your cylinder with height %f and radius %f has an area of %f and a volume of %f\n", *height, *radius, *area, *volume);
}

float calcArea(float* radius) {
    float area = M_PI * pow(*radius, 2);
    return area;
}

float calcVolume(float* height, float* area) {
    float volume;
    volume = *area * *height;
    return volume;
}

// 1) prompt for name
string promptName()
{
    string fullName;
    cout << "Please enter your full name: ";
    getline(cin, fullName);
    return fullName;
}

// 2) greet user
void greetUser(string* fName) {
    cout << "Welcome " << *fName << " to our cylinder calculator." << endl;
}

// float getParameters() {   WRONG!!!!!
//     float height, radius;
//     cout << "Please enter the height of your cylinder: ";
//     cin >> height;

//     cout << "Please enter the radius of your cylinder: ";
//     cin >> radius;
//     return height, radius;
// }

// 3) get height and radius
void getParameters(float& height, float& radius) {
    // float height, radius;
    cout << "Please enter the height of your cylinder: ";
    cin >> height;

    cout << "Please enter the radius of your cylinder: ";
    cin >> radius;
}

// float getHeight() {
//     float height;
//     cout << "Please enter the height of your cylinder: ";
//     cin >> height;

//     return height;
// }

// float getRadius() {
//     float radius;
//     cout << "Please enter the radius of your cylinder: ";
//     cin >> radius;

//     return radius;
// }