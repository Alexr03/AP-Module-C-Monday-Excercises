//
// Created by alexr on 11/01/2021.
// https://repl.it/@alexr03/AP-Module-C-Monday-Excercises#Exercise1/Exercise2.cpp
//

#include "Exercise2.h"
#include "../Helpers/iohelper.h"

void Exercise2::execute() {
    float temperature = atof(iohelper::getInput("Please enter the starting temperature").c_str());
    string conversionType = iohelper::getInput(
            "Press 'C' to convert from Fahrenheit to Centigrade\r\nPress 'F' to convert from Centigrade to Fahrenheit");

    if (conversionType == "C") {
        cout << temperature << " degrees Fahrenheit is " << convertCelsiusToFahrenheit(temperature) << " degrees Celsius.";
    } else if (conversionType == "F") {
        cout << temperature << " degrees Celsius is " << convertFahrenheitToCelsius(temperature) << " degrees Fahrenheit.";
    } else {
        cout << "Sorry I don't know what you mean.";
    }
}

string Exercise2::name() {
    return "Fahrenheit Centigrade Conversion";
}

double Exercise2::convertCelsiusToFahrenheit(double temperature) {
    return (temperature * 9 / 5) + 32;
}

double Exercise2::convertFahrenheitToCelsius(double temperature) {
    return (temperature - 32) * 5 / 9;
}
