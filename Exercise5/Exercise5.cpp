//
// Created by alexr on 11/01/2021.
// https://repl.it/@alexr03/AP-Module-C-Monday-Excercises#Exercise5/Exercise5.cpp
//

#include <ctime>
#include "Exercise5.h"
#include "../Helpers/iohelper.h"

void Exercise5::execute() {
    int age = stod(iohelper::getInput("Please enter your current age"));
    int retirementAge = stod(iohelper::getInput("At what age would you like to retire"));
    int yearsRemaining = retirementAge - age;
    int currentYear = getCurrentYear();
    int retirementYear = currentYear + yearsRemaining;

    cout << "The current year is " << currentYear << ", can retire in " << retirementYear << "; you have " << yearsRemaining << " years remaining.";
}

int Exercise5::getCurrentYear() {
    time_t t = time(NULL);
    tm *timePtr = localtime(&t);
    return timePtr->tm_year + 1900; // Time since 1900
}

string Exercise5::name() {
    return "Retirement Age";
}
