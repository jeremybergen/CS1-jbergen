#pragma once
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

namespace fileProcess{
    void readFile(std::string&);
    void openFile(std::string&, std::ifstream&);
}