//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_EXERCISE2_H
#define ADAADVANCEDPROGRAMMING_1_EXERCISE2_H


#include "../Exercise.h"

class Exercise2 : public Exercise {
public:
    void execute() override;

    static double convertCelsiusToFahrenheit(double temperature);

    static double convertFahrenheitToCelsius(double temperature);
};


#endif //ADAADVANCEDPROGRAMMING_1_EXERCISE2_H
