//
// Created by alexr on 11/01/2021.
//

#include "Exercise6.h"
#include "../Helpers/iohelper.h"

void Exercise6::execute() {
    int age = stof(iohelper::getInput("Please enter your age"));
    int restingPulse = stof(iohelper::getInput("Please enter your resting pulse"));


    // For loop for 40% -> 95%
    for (double i = 40; i <= 95; i = i + 5) {
        double percentage = i / 100;
        int targetRate = (((220 - age) - restingPulse) * percentage) + restingPulse;
        cout << i << "% = " << targetRate << std::endl;
    }
}

string Exercise6::name() {
    return "Karvonen Heart Rate Calculator";
}
