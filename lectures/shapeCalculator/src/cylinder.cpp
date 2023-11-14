#include <iostream>
#include <cassert>
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
        // std::cout << "DEBUG: inside calcVolume" << std::endl;
        // std::cout << "DEBUG: areaCircle: " << c.areaCircle << std::endl;
        // std::cout << "DEBUG: height: " << c.height << std::endl;
        c.volume = c.areaCircle * c.height;
    }
    void createCylinder(Cylinder &c1) {
        // Cylinder c1;
        getRadius(c1.radius);
        getHeight(c1.height);
        c1.calcArea();
        calcVolume(c1);
    }

    void test() {
        const double epsilon = 1e-5;

        cylinder::Cylinder c1;
        c1.radius = 5;
        c1.height = 2;
        c1.calcArea();
        calcVolume(c1);
        assert(abs(c1.areaCircle - 78.53982) <= epsilon);
        assert(abs(c1.volume - 157.07963) <= epsilon);

        c1.radius = 8;
        c1.height = 4;
        c1.calcArea();
        calcVolume(c1);
        assert(abs(c1.areaCircle - 201.06193) <= epsilon);
        assert(abs(c1.volume - 804.24772) <= epsilon);
        
        std::cout << "All cylinder test cases passed" << std::endl;
    }
}