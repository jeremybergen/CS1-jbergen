#include "fileio.h"
#include "cylinder.h"
#include "sphere.h"

namespace fileProcess{
    void readFile(std::string& fileName) {
        std::string readLine;
        std::ifstream fin;
        std::ofstream fout;

        openFile(fileName, fin);
        fout.open("output.txt");

        while(getline(fin, readLine)) {
            int counter = 0;
            std::string tmpStr;
            std::stringstream iss;
            iss.str(readLine);

            std::string shape;
            cylinder::Cylinder c1;
            sphere::Sphere s1;
            while(getline(iss, tmpStr, ',')) {
                if(counter == 0) {
                    shape = tmpStr;
                } else {
                    if(shape == "cylinder") {
                        if(counter == 1) {
                            //radius
                            c1.radius = atoi(tmpStr.c_str());
                        } else {
                            //height
                            c1.height = atoi(tmpStr.c_str());
                        }
                    } else if (shape == "sphere") {
                        //radius
                        s1.radius = atoi(tmpStr.c_str());
                    }
                }
                counter++;
            }
            if(shape == "cylinder") {
                c1.calcArea();
                cylinder::calcVolume(c1);
                c1.printVals(fout);
            } else if (shape == "sphere") {
                s1.calcVolume();
                sphere::printVals(s1, fout);
            } else {
                std::cout << "Invalid shape" << std::endl;
            }
        }

        fin.close();
        fout.close();
    }

    void openFile(std::string& fileName, std::ifstream& fin) {
        fin.open(fileName);
    }
}