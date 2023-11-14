#include <iostream>
#include <cmath>
#include <cassert>
#include "sphere.h"

namespace sphere {
    void createSphere(sphere::Sphere &s1) {
        s1.getRadius();
        s1.calcVolume();
    }

    void printVals(sphere::Sphere &s1) {
        std::cout << "Your sphere with radius " << s1.radius
                  << " has a volume of " << s1.volume << std::endl;
    }

    void test() {
        const double epsilon = 1e-5;

        sphere::Sphere s1;
        s1.radius = 5;
        s1.calcVolume();
        assert(abs(s1.volume - 523.59878) <= epsilon);

        s1.radius = 10;
        s1.calcVolume();
        assert(abs(s1.volume - 4188.7902) <= epsilon);

        std::cout << "All sphere test cases passed" << std::endl;
    }
}