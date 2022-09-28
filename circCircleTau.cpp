// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 09 - 28 - 22
// This program calculates the circumference of a circle with TAU & user input

#include <iostream>

int main() {
    const double TAU = 6.28;
    int radius;
    std::cout << "What is your radius?: ";
    std::cin >> radius;
    std::cout << "\n";
    std::cout << "C = 𝞽 * r" << std::endl;
    std::cout << "C = 𝞽 * "<< radius << std::endl;
    std::cout << "C = " << TAU * radius << " m" << std::endl;
}
