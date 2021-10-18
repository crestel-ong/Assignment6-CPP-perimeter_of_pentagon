// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: October 2021
// This is the Perimeter of Pentagon program in C++

#include <iostream>
#include <string>

float CalculatePerimeterOfPentagon(float side) {
    // this program calculates the perimeter of a pentagon
    float perimeter;

    // process
    perimeter = side * 5;

    return perimeter;
}

main() {
    // this function gets the length of one side
    // declaring
    std::string sideAsString;
    float returnedPerimeter;
    float sideAsFloat;

    // tell the user what the program does
    std::cout << "This program calculates the perimeter of a pentagon."
    << std::endl;

    // input
    std::cout << "Enter the length of one side of the pentagon: ";
    std::cin >> sideAsString;
    std::cout << "" << std::endl;

    try {
        // convert string to float
        sideAsFloat = std::stof(sideAsString);

        // call functions
        returnedPerimeter =  CalculatePerimeterOfPentagon(sideAsFloat);

        // output
        std::cout << "The perimeter of this pentagon is "
        << returnedPerimeter << " cm." <<std::endl;
    } catch (std::invalid_argument) {
        std::cout << sideAsString << " is an invalid input." << std::endl;
    }

    std::cout << "\nDone.";
}
