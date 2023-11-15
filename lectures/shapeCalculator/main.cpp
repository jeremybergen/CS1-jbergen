/*
Name: Jeremy Bergen

Shape calculator
*/
#include <iostream>
#include "src/cylinder.h"
#include "src/sphere.h"
#include "src/cube.h"
#include "src/greet.h"
#include "src/fileio.h"

bool runProgram();
void test();

int main(int argc, char *argv[]) {
    std::string userName;
    // bool runAgain = true;

    if(argc == 2 && (string)argv[1] == "test") {
        test();
        return 0;
    } else if(argc > 2 && (string)argv[1] == "-f") {
        // ./programname.out -f input.txt
        std::string fileName = (string)argv[2];
        fileProcess::readFile(fileName);
        return 0;
    }
    
    greet::getName(userName);
    greet::greetName(userName);

    // while(runAgain) {
    //     runAgain = runProgram();
    // }
    while(runProgram()) {

    }

    return 0;
}

void test() {
    sphere::test();
    cylinder::test();
}

bool runProgram() {
    int selection;

    selection = greet::selectCalculator();
    // std::cout << "DEBUG: selection: " << selection << std::endl;

    switch(selection) {
        case 1:
            //cylinder
            cylinder::Cylinder c1;
            cylinder::createCylinder(c1);
            c1.printVals();
            // std::cout << "DEBUG: " << c1.radius << " " << c1.height << std::endl;
            break;
        case 2:
            //sphere
            sphere::Sphere s1;
            sphere::createSphere(s1);
            sphere::printVals(s1);
            // std::cout << "DEBUG: " << s1.radius << " " << s1.volume << std::endl;
            break;
        case 3:
            //cube
            break;
        default:
            return false;
    }
    return true;
}