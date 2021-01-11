//
// Created by alexr on 11/01/2021.
//

#include "iohelper.h"

std::string iohelper::getInput(string question) {
    string answer;
    question += ":";
    cout << question;
    getline(cin, answer);
    return answer;
}
