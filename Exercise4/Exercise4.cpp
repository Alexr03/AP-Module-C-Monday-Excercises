//
// Created by alexr on 11/01/2021.
//

#include "Exercise4.h"
#include "../Helpers/iohelper.h"

void Exercise4::execute() {
    int value = stof(iohelper::getInput("Please enter a value"));
    if (value % 2 == 0) {
        cout << value << " is an even number";
    } else {
        cout << value << " is an odd number";
    }
}

string Exercise4::name() {
    return "Odd or Even number";
}
