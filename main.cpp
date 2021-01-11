#include <iostream>
#include <string>
#include "iohelper.h"
#include <stdlib.h>

int quoteExercise();

int fahrenheitToCentigradeConversion();

using namespace std;

int main() {
//    return quoteExercise();
    return fahrenheitToCentigradeConversion();
}

int quoteExercise() {
    string quote = iohelper::getInput("What is the quote");
    string whoSaidQuote = iohelper::getInput("Who said it");

    cout << whoSaidQuote << " says: \"" << quote << "\"";

    return 0;
}

int fahrenheitToCentigradeConversion() {
    float temperature = atof(iohelper::getInput("Please enter the starting temperature").c_str());
    string conversionType = iohelper::getInput(
            "Press 'C' to convert from Fahrenheit to Centigrade.\r\nPress 'F' to convert from Centigrade to Fahrenheit.");

    if (conversionType == "C") {
        cout << temperature << " degrees Fahrenheit is " << ((temperature - 32) * 5 / 9) << " degrees Celsius.";
    } else if (conversionType == "F") {
        cout << temperature << " degrees Celsius is " << ((temperature * 9 / 5) + 32) << " degrees Fahrenheit.";
    } else {
        cout << "Sorry I don't know what you mean.";
        return 1;
    }
    return 0;
}
