//
// Created by alexr on 11/01/2021.
//

#include "mathshelper.h"
#include <list>
#include <vector>

using namespace std;

int mathshelper::getEvenCount(const list<int> &numbers) {
    vector<int> numberVector(numbers.begin(), numbers.end());
    int count = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numberVector[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int mathshelper::getOddCount(const list<int> &numbers) {
    vector<int> numberVector(numbers.begin(), numbers.end());
    int count = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numberVector[i] % 2 != 0) {
            count++;
        }
    }
    return count;
}

int mathshelper::getZeroCount(list<int> numbers) {
    vector<int> numberVector(numbers.begin(), numbers.end());
    int count = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if (numberVector[i] != 0) {
            count++;
        }
    }
    return count;
}
