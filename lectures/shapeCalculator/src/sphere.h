#pragma once
#include <cmath>
#include <iostream>

namespace sphere{
    struct Sphere {
        int radius;
        float volume;

        void getRadius() {
            int inputVal;
            std::cout << "Please enter the radius of your sphere: ";
            while(std::cin >> inputVal) {
                if(inputVal <= 0) {
                    std::cout << "Please enter a radius greater than 0: ";
                    continue;
                } else {
                    radius = inputVal;
                    break;
                }
            }
            
            // std::cin >> radius;
        }

        void calcVolume() {
            // std::cout << "DEBUG: M_PI: " << M_PI << std::endl;
            // std::cout << "DEBUG: 4/3: " << (4/3.0) << std::endl;
            volume = ((float)4/3.0) * M_PI * pow(radius, 3);
        }
    };

    void createSphere(sphere::Sphere &);
    void printVals(sphere::Sphere &);
    void test();
}