/*
Name: Jeremy Bergen

Shape calculator
*/
#include <iostream>
#include "src/cylinder.h"
#include "src/sphere.h"
#include "src/cube.h"
#include "src/greet.h"

int main(int argc, char *argv[]) {
    std::string userName;
    int selection;

    greet::getName(userName);
    greet::greetName(userName);

    selection = greet::selectCalculator();
    // std::cout << "DEBUG: selection: " << selection << std::endl;

    switch(selection) {
        case 1:
            //cylinder
            cylinder::Cylinder c1;
            cylinder::createCylinder(c1);
            c1.printVals();
            std::cout << "DEBUG: " << c1.radius << " " << c1.height << std::endl;
            break;
        case 2:
            //sphere
            break;
        case 3:
            //cube
            break;
        default:
            break;
    }

    return 0;
}