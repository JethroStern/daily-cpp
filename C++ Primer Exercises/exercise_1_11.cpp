// exercise_1_11.cpp : Write a program that prompts the user for two integers. Print each
// number in the range specified by those two integers.

#include <iostream>

int main()
{
    int v1 = 0, v2 = 0;

    // Prompt the user to enter two numbers
    std::cout << "Enter two numbers: ";
    std::cin >> v1 >> v2;

    // Print numbers in the range specified by v1 and v2.
    int range = v1, val = v2;
    while (range < v2) {
        ++range;
        std::cout << range << std::endl;
    }
   
    return 0;

}
