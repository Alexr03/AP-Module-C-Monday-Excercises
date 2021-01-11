//
// Created by alexr on 11/01/2021.
//

#ifndef ADAADVANCEDPROGRAMMING_1_EXERCISE_H
#define ADAADVANCEDPROGRAMMING_1_EXERCISE_H

#include "string"


class Exercise {
public:
    virtual void execute();

    virtual std::string name();
};


#endif //ADAADVANCEDPROGRAMMING_1_EXERCISE_H
