#include <iostream>

namespace cylinder {
    void getHeight(int& height) {
        std::cout << "Please enter the height: ";
        std::cin >> height;
    }
    void getRadius(int& radius) {
        std::cout << "Please enter the radius: ";
        std::cin >> radius;
    }
    void calcVolume(int height, int radius, float& volume) {
        volume = 3.141 * radius * radius * height;
    }
}