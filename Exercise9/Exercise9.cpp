//
// Created by alexr on 11/01/2021.
// https://repl.it/@alexr03/AP-Module-C-Monday-Excercises#Exercise9/Exercise9.cpp
//

#include "regex"
#include "Exercise9.h"
#include "../Helpers/iohelper.h"

void Exercise9::execute() {
    std::regex alpha("^[a-zA-Z]*$");
    std::regex num("^[1-9]*$");

    while (true) {
        string character = iohelper::getInput("Please enter a character");
        if (std::regex_match(character, alpha)) {
            cout << "Alphabetic character detected";
        } else if (std::regex_match(character, num)) {
            cout << "Digit character detected";
        } else {
            cout << "Special character detected.";
        }

        cout << endl;
        string tryAgain = iohelper::getInput("Try again (Y/N)", "^[Y|N]*$");
        if (tryAgain == "N") {
            cout << "Thank you, good bye.";
            return;
        }
    }
}

string Exercise9::name() {
    return "Character Type Checker";
}
