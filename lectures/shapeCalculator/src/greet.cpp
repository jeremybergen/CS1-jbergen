/*
Greet new person
*/
#include <iostream>
#include "greet.h"

namespace greet {
    void getName(std::string& fullName) {
        std::cout << "Please enter your name: ";
        getline(std::cin, fullName);
    }

    void greetName(std::string fullName) {
        std::cout << "Welcome " << fullName << " to our calculator." << std::endl;
    }

    void printMenu() {
        std::cout << "Please select the object to calculate" << std::endl;
        std::cout << "1) Cylinder" << std::endl;
        std::cout << "2) Sphere" << std::endl;
        std::cout << "3) Cube" << std::endl;
        std::cout << "4) Exit" << std::endl;
        std::cout << "? ";
    }

    int selectCalculator() {
        int selection = 0;
        while(selection < 1 || selection > 4) {
            printMenu();
            std::cin >> selection;
            if(selection < 1 || selection > 4) {
                std::cout << "Invalid selection" << std::endl;
            }
        }
        return selection;
    }
}