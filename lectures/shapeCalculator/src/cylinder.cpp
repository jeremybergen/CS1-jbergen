#include <iostream>
#include "cylinder.h"

namespace cylinder {
    void getHeight(int& height) {
        std::cout << "Please enter the height: ";
        std::cin >> height;
    }
    void getRadius(int& radius) {
        std::cout << "Please enter the radius: ";
        std::cin >> radius;
    }
    // void calcVolume(int height, int radius, float& volume) {
    void calcVolume(Cylinder &c) {
        // c.volume = 3.141 * c.radius * c.radius * c.height;
        c.volume = c.areaCircle * c.height;
    }
    void createCylinder(Cylinder &c1) {
        // Cylinder c1;
        getRadius(c1.radius);
        getHeight(c1.height);
        calcVolume(c1);
        c1.calcArea();
    }
}