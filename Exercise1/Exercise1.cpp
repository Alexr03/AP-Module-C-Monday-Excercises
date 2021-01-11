//
// Created by alexr on 11/01/2021.
// https://repl.it/@alexr03/AP-Module-C-Monday-Excercises#Exercise1/Exercise1.cpp
//

#include "Exercise1.h"
#include "string"
#include "../Helpers/iohelper.h"

using namespace std;

void Exercise1::execute() {
    string quote = iohelper::getInput("What is the quote");
    string whoSaidQuote = iohelper::getInput("Who said it");

    cout << whoSaidQuote << " says: \"" << quote << "\"";
}

string Exercise1::name() {
    return "Quote a quote";
}
