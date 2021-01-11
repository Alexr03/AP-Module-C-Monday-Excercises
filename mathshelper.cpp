//
// Created by alexr on 11/01/2021.
//

#include "mathshelper.h"
#include <list>
using namespace std;

int mathshelper::getEvenCount(const list<int>& numbers) {
    int count = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if(i % 2 == 0){
            count++;
        }
    }
    return count;
}

int mathshelper::getOddCount(const list<int>& numbers) {
    int count = 0;
    for (int i = 0; i < numbers.size(); ++i) {
        if(i % 2 != 0){
            count++;
        }
    }
    return count;
}