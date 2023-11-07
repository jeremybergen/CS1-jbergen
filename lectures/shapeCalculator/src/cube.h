#ifndef CUBE_H
#include <iostream>
#include <cmath>

using namespace std;

void getEdge(int&);
void calcVolume(int, float&);

void getEdge(int& edge) {
    cout << "Please enter the size of the edge for your cube: ";
    cin >> edge;
}
void calcVolume(int edge, float& volume) {
    volume = pow(edge, 3);
}
#endif