/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Brooks McKinley
 */

#include "std_lib_facilities.h"

int main(void) {
    // Read in data
    string operation;
    cin >> operation;
    double first, second;
    cin >> first >> second;

    double answer;
    // Process
    if (operation == "+" || operation == "plus") {
        answer = first + second;
    } else if (operation == "-" || operation == "minus") {
        answer = first - second;
    } else if (operation == "*" || operation == "mul") {
        answer = first * second;
    } else if (operation == "/" || operation == "div") {
        answer = first / second;
    } else {
        cout << "Unrecognized operation!" << endl;
        return 1;
    }

    cout << "Your answer is " << answer << "." << endl;
}