#include <iostream>
#include <cmath>

namespace sphere {
    void getRadius(int& radius) {
        std::cout << "Please enter the radius of your sphere: ";
        std::cin >> radius;
    }
    void calcVolume(int radius, float& volume) {
        volume = (4/3) * M_PI * pow(radius, 3);
    }
}