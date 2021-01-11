#include "Exercise1/Exercise1.h"
#include "Exercise2/Exercise2.h"
#include "Exercise3/Exercise3.h"
#include "Exercise4/Exercise4.h"
#include "Exercise5/Exercise5.h"
#include "Exercise6/Exercise6.h"
#include "Exercise7/Exercise7.h"
#include "Exercise8/Exercise8.h"
#include "Exercise9/Exercise9.h"
#include "vector"
#include "iostream"
#include "Helpers/iohelper.h"

std::vector<Exercise *> getExercises();

using namespace std;

int main() {
    while (true) {
        cout << "--------------------------------------------------------------------------------" << endl;
        std::vector<Exercise *> exercises = getExercises();
        for (int i = 0; i < exercises.size(); ++i) {
            cout << "[" << i + 1 << "] " << exercises[i]->name() << endl;
        }

        int option = stof(iohelper::getInput("Please choose a exercise"));
        auto *exercise = exercises[option - 1];
        cout << "Running: " << exercise->name() << endl;
        exercise->execute();
        return 0;
    }
}

std::vector<Exercise *> getExercises() {
    std::list<Exercise *> exercises;
    exercises.push_back(new Exercise1());
    exercises.push_back(new Exercise2());
    exercises.push_back(new Exercise3());
    exercises.push_back(new Exercise4());
    exercises.push_back(new Exercise5());
    exercises.push_back(new Exercise6());
    exercises.push_back(new Exercise7());
    exercises.push_back(new Exercise8());
    exercises.push_back(new Exercise9());

    vector<Exercise *> vectorExercises(exercises.begin(), exercises.end());
    return vectorExercises;
}