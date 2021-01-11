//
// Created by alexr on 11/01/2021.
// https://repl.it/@alexr03/AP-Module-C-Monday-Excercises#Exercise1/Exercise8.cpp
//

#include <list>
#include <vector>
#include "Exercise8.h"
#include "../Helpers/iohelper.h"

void Exercise8::execute() {
    std::list<int> numbers;

    while (true) {
        string value = iohelper::getInput("Please enter a valid numeric or \"Q\" to finish", "^[0-9|Q]*$");
        if (value == "Q") {
            break;
        }
        numbers.push_front(stof(value));
    }

    int size = numbers.size();
    int largestValue = calculateLargestValue(numbers);
    int lowestValue = calculateLowestValue(numbers);

    cout << "Total number of values entered: " << size << endl;
    cout << "Lowest Value: " << lowestValue << endl;
    cout << "Largest Value: " << largestValue << endl;
}

int Exercise8::calculateLargestValue(std::list<int> list) {
    int largest = 0;
    vector<int> numberVector(list.begin(), list.end());
    for (int i = 0; i < list.size(); ++i) {
        int value = numberVector[i];
        if (value > largest) {
            largest = value;
        }
    }
    return largest;
}

int Exercise8::calculateLowestValue(std::list<int> list) {
    vector<int> numberVector(list.begin(), list.end());
    int lowest = numberVector[0];
    for (int i = 0; i < list.size(); ++i) {
        int value = numberVector[i];
        if (value < lowest) {
            lowest = value;
        }
    }
    return lowest;
}

string Exercise8::name() {
    return "Lowest and Largest values";
}
