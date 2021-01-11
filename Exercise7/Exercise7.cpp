//
// Created by alexr on 11/01/2021.
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

    int evenNumbers = mathshelper::getNegativeCount(numbers);
    int oddNumbers = mathshelper::getPositivesCount(numbers);
    int zeroNumbers = mathshelper::getZeroCount(numbers);
    cout << "Even numbers: " << evenNumbers << std::endl;
    cout << "Odd numbers: " << oddNumbers << std::endl;
    cout << "Zero numbers: " << oddNumbers << std::endl;
}

string Exercise7::name() {
    return "Zero, Positive & Negative Type Counter";
}
