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
    cout << "--------------------------------------------------------------------------------" << endl; // Splitter
    std::vector<Exercise *> exercises = getExercises(); // Vector containing the menus
    // Loop through the menu system and list its index + 1, along with the exercise name
    for (int i = 0; i < exercises.size(); ++i) {
        cout << "[" << i + 1 << "] " << exercises[i]->name() << endl;
    }

    // Ask the user for their menu option
    int option = stof(iohelper::getInput("Please choose a exercise"));
    auto *exercise = exercises[option - 1];
    cout << "Running: " << exercise->name() << endl;
    // Execute the exercise
    exercise->execute();
}

std::vector<Exercise *> getExercises() {
    // Add all the exercises to the vector menu system.
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