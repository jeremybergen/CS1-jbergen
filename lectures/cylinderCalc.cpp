/*
Name: Jeremy Bergen

This is a calculator for a cylinder

prompt for user's name and store it in a variable
greet user to our program
create height and radius variables for cylinder as a float
prompt for height and radius
calc area of circle (area = pi * radius^2)
calc volume (volume = area * height)
print calculated values
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cstdio>

using namespace std;

int main() {
    string fullName;
    float height, radius;
    float area, volume;

    // prompt for user's name and store it in a variable
    cout << "Welcome to our cylinder calculator. Please tell me who you are: ";
    // Don't do.... cin >> fullName;
    getline(cin, fullName);

    // greet user to our program
    // cout << "Hello " << fullName << " it's great to meet you!" << endl;
    printf("Hello %s it's great to meet you!\n", fullName.c_str());
    
    // create height and radius variables for cylinder
    // prompt for height and radius
    cout << "Please enter the radius of your cylinder: ";
    cin >> radius;

    cout << "Please enter the height of your cylinder: ";
    cin >> height;

    // cout << "DEBUG: radius: " << radius << endl;
    // cout << "DEBUG: height: " << height << endl;
    // calc area of circle (area = pi * radius^2)
    area = M_PI * pow(radius, 2);
    // cout << "DEBUG: area: " << area << endl;
    // calc volume (volume = area * height)
    volume = area * height;
    // print calculated values
    printf("The cylinder with radius %.2f and height %.2f has a volume of %.4f\n", radius, height, volume);

    return 0;
}