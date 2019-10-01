// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: Sept 2019
// This program calculates the area of an annulus
// with user input

#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    // this function calculates area of an annulus
    float outerRadius;
    float innerRadius;
    float area;

    // input
    std::cout << "Enter Outer Radius of Annulus (R) in cm: ";
    std::cin >> outerRadius;
    std::cout << "Enter Inner Radius of Annulus (R) in cm: ";
    std::cin >> innerRadius;

    // process
    area = M_PI*(pow(outerRadius, 2)-pow(innerRadius, 2));

    // output
    std::cout << "" << std::endl;
    std::cout << "Area of Annulus is " << std::fixed << std::setprecision(2)
        << std::setfill('0') << area << "cm" << std::endl;
}
