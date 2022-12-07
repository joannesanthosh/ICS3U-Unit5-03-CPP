// Copyright (c) 2022 Joanne Santhosh
//
// Created by: Joanne Santhosh
// Created on: Nov 2022
// This program converts grade levels to percentages

#include <iostream>

int convertLevelToPercent(std::string mark) {
    // This function converts mark to percentage
    int percentage;

    if (mark == "4+") {
        percentage = 97;
    } else if (mark == "4") {
        percentage = 90;
    } else if (mark == "4-") {
        percentage = 83;
    } else if (mark == "3+") {
        percentage = 78;
    } else if (mark == "3") {
        percentage = 75;
    } else if (mark == "3-") {
        percentage = 71;
    } else if (mark == "2+") {
        percentage = 68;
    } else if (mark == "2") {
        percentage = 65;
    } else if (mark == "2-") {
        percentage = 61;
    } else if (mark == "1+") {
        percentage = 58;
    } else if (mark == "1") {
        percentage = 55;
    } else if (mark == "1-") {
        percentage = 51;
    } else if (mark == "R") {
        percentage = 25;
    } else if (mark == "NE") {
        percentage = 0;
    } else {
        percentage = -1;
    }

    return percentage;
}

int main() {
    // This function gets the mark
    std::string userMark;
    int finalPercent;

    // Input
    std::cout << "Enter the level you want converted to percentage: ";
    std::cin >> userMark;
    std::cout << "" << std::endl;

    // Call function
    finalPercent = convertLevelToPercent(userMark);

    // Output
    if (finalPercent == -1) {
        std::cout << "Invalid Input." << std::endl;
    } else {
        std::cout << "Level " << userMark << " has a percentage of "
                  << finalPercent << "%." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
