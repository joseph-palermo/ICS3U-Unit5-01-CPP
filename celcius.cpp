// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: November 2019
// This program is converts temperature from Celcius to Farenheit

#include <iostream>

void conversion() {
    // this program converts Celcius to Farenheit

    // input
    try {
        float tC;
        float tF;
        std::string tCString;

        std::cout << "Enter a temperature here (°C): ";
        std::cin >> tCString;

    // process
        tC = std::stof(tCString);

        tF = (tC * 9 / 5) + 32;

    // output
        std::cout << "\n";
        std::cout << tC <<"°C" <<  " = " << tF << "°F";
    } catch (std::invalid_argument) {
        std::cout << "\n";
        std::cout << "Please insert a valid temperature.";
    }
}


int main() {
    // this function calls other functions

    // call function
    conversion();
}
