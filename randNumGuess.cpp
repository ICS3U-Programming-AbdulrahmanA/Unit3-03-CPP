// Copyright (c) 2025 Abdul All rights reserved.
//
// Created by: Abdul
// Date: 10/16/2025
// Number guessing game

#include <cmath>
#include <cstdlib>
#include <iostream>

int main() {
    // Ask user for a number between 0-9
    int guess;
    std::cout << "Enter a random number between 0-9: ";
    std::cin >> guess;

    // Allows for different random numbers each time you run the program
    srand(time(0));

    // Generate computer random number
    int computer_guess = rand() % 9;

    // Check if user guessed correctly and display message
    if (guess == computer_guess) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "Wrong! The correct number was " << computer_guess << std::endl;
    }
}
