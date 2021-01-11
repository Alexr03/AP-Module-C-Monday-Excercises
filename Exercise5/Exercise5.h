//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_EXERCISE5_H
#define ADAADVANCEDPROGRAMMING_1_EXERCISE5_H


#include "../Exercise.h"

class Exercise5 : public Exercise {
public:
    void execute() override;

    std::string name() override;

    /// Gets the current year
    /// \return Current year.
    static int getCurrentYear();
};


#endif //ADAADVANCEDPROGRAMMING_1_EXERCISE5_H
