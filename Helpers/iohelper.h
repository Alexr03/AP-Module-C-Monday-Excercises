//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_IOHELPER_H
#define ADAADVANCEDPROGRAMMING_1_IOHELPER_H


#include <string>
#include <iostream>
using namespace std;

class iohelper {
public:
    static std::string getInput(string question = "", const string& regex = "");
};


#endif //ADAADVANCEDPROGRAMMING_1_IOHELPER_H
