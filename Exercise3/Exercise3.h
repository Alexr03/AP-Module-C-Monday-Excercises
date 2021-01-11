//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_EXERCISE3_H
#define ADAADVANCEDPROGRAMMING_1_EXERCISE3_H


#include "../Exercise.h"

class Exercise3 : public Exercise {
public:
    void execute() override;

    static int calculateSquareFoot(int length, int width);

    static double calculateSquareMeters(int squareFoot);
};


#endif //ADAADVANCEDPROGRAMMING_1_EXERCISE3_H
