//
// Created by alexr on 11/01/2021.
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
