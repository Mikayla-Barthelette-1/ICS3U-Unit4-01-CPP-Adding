// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program will add up all positive integers up to the entered integer.

#include <iostream>
#include <string>


int main() {
    // this function adds the integers

    int loopCounter = 0;
    int theSum = 0;
    int positiveInteger;
    std::string userInput;


    // input
    std::cout << "Enter a positive integer: ";
    std::cin >> userInput;

    // process
    try {
        positiveInteger = std::stoi(userInput);
        while (loopCounter <= positiveInteger) {
            theSum = theSum + loopCounter;
            loopCounter = loopCounter + 1;
        }
        std::cout <<
            "The sum of all of the numbers from 1 to " << positiveInteger <<
                " is " << theSum;
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }

    // output
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::ends;
}
