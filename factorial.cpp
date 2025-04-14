// Copyright (c) 2025 Gustav I
// Created By: Gustav I
// Date: April 14, 2025
// This program asks the user for a whole number.
// It then calculates the factorial of that number.

#include <cmath>  // for checking if input is a whole number
#include <iostream>

int main() {
    // initializations
    int counter = 0;
    int factorialAnswer = 1;
    double userNum;

    std::cout << "Enter a whole number: ";
    std::cin >> userNum;
    std::cout << std::endl;

    // Check if input is valid
    if (std::cin.fail()) {
        std::cout << "Please enter a valid number." << std::endl;
    } else if (userNum < 0) {
        std::cout << "Please enter a positive number." << std::endl;
    } else if (userNum != std::floor(userNum)) {
        std::cout << "Please enter a whole number." << std::endl;
    } else {
        // Convert to integer, since it's confirmed to be a valid whole number
        int userIntNum = static_cast<int>(userNum);

        // calculate the factorial of the number
        do {
            counter++;
            factorialAnswer = factorialAnswer * counter;
            std::cout << "Tracking " << counter << " times through the loop.\n";
        } while (counter < userIntNum);

        // display the answer to the user
        std::cout << userIntNum << "! = " << factorialAnswer << std::endl;
    }

    return 0;
}
