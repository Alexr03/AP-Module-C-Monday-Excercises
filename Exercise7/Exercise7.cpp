//
// Created by alexr on 11/01/2021.
// // https://repl.it/@alexr03/AP-Module-C-Monday-Excercises#Exercise1/Exercise7.cpp
//

#include "Exercise7.h"
#include "list"
#include "../Helpers/iohelper.h"
#include "../Helpers/mathshelper.h"

void Exercise7::execute() {
    std::list<int> numbers;

    while(true){
        string value = iohelper::getInput("Please enter a valid numeric or \"Q\" to finish", "^[0-9|Q]*$");
        if(value == "Q"){
            break;
        }
        numbers.push_front(stof(value));
    }

    int positiveNumbers = mathshelper::getPositivesCount(numbers);
    int negativeNumbers = mathshelper::getNegativeCount(numbers);
    int zeroNumbers = mathshelper::getZeroCount(numbers);
    cout << "Positive numbers: " << positiveNumbers << std::endl;
    cout << "Negative numbers: " << negativeNumbers << std::endl;
    cout << "Zero numbers: " << zeroNumbers << std::endl;
}

string Exercise7::name() {
    return "Zero, Positive & Negative Type Counter";
}
