#include <iostream>
using namespace std;

int main(){

    int high_score = 100;
    int low_score = 60;

    // Scenario 1: pointers to constants
    // The data pointed to by the pointers is constant and cannot be changed (data is constant)
    // The pointer itself can change and point somewhere else (memory address can be changed)

    const int *score_ptr = &high_score;
    // *score_ptr = 86; // Error
    score_ptr = &low_score; // OK, pointer itself can change to point somewhere else


    // Scenario 2: constant pointers
    // The data pointed to by the pointers can be changed (data assigned to that memory address can be changed)
    // The point itself cannot change and point somewhere else (memory address constant)
    int *const score_ptr = &high_score;
    // *score_ptr = 86;  //OK
    score_ptr = &low_score; // Error


    // Scenario 3: constant points to constants
    // Both data and pointer (memory address) cannot be changed
    const int *const score_ptr = &high_score;
}

