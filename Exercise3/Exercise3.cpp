//
// Created by alexr on 11/01/2021.
// https://repl.it/@alexr03/AP-Module-C-Monday-Excercises#Exercise3/Exercise3.cpp
//

#include <iostream>
#include "Exercise3.h"
#include "../Helpers/iohelper.h"

void Exercise3::execute() {
    int length = stoi(iohelper::getInput("Please enter the length of the room in feet"));
    int width = stoi(iohelper::getInput("Please enter the width of the room in feet"));
    int squareFoot = calculateSquareFoot(length, width);
    double squareMeters = calculateSquareMeters(squareFoot);

    cout << squareFoot << " square foot" << std::endl;
    cout << squareMeters << " square meters";
}

int Exercise3::calculateSquareFoot(int length, int width) {
    return length * width;
}

double Exercise3::calculateSquareMeters(int squareFoot) {
    return squareFoot / 10.764;
}

string Exercise3::name() {
    return "Area of a Rectangle Room";
}
