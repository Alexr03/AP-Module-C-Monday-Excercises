//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_EXERCISE3_H
#define ADAADVANCEDPROGRAMMING_1_EXERCISE3_H


#include "../Exercise.h"

class Exercise3 : public Exercise {
public:
    void execute() override;

    std::string name() override;

    /// Calculate square foot from the length and width given
    /// \param length
    /// \param width
    /// \return The square foot.
    static int calculateSquareFoot(int length, int width);

    static double calculateSquareMeters(int squareFoot);
};


#endif //ADAADVANCEDPROGRAMMING_1_EXERCISE3_H
