#pragma once
#include <cmath>
#include <iostream>

namespace cylinder {
    struct Cylinder {
        int radius, height;
        float volume;
        float areaCircle;

        void calcArea() {
            areaCircle = M_PI * pow(radius, 2);
        }

        void printVals() {
            std::cout << "Your cylinder with radius " << radius
                      << " and height " << height << " has a volume of "
                      << volume << std::endl;
        }
    };

    void createCylinder(Cylinder &);
    void getHeight(int&);
    void getRadius(int&);
    void calcVolume(Cylinder &);
}