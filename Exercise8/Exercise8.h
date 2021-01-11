//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_EXERCISE8_H
#define ADAADVANCEDPROGRAMMING_1_EXERCISE8_H


#include "list"
#include "../Exercise.h"

class Exercise8 : public Exercise {
public:
    void execute() override;

    std::string name() override;

    /// Calculates the largest value in the list
    /// \param list
    /// \return Largest value
    static int calculateLargestValue(std::list<int> list);

    /// Calculates the lowest value in the list
    /// \param list
    /// \return lowest value
    static int calculateLowestValue(std::list<int> list);
};


#endif //ADAADVANCEDPROGRAMMING_1_EXERCISE8_H
