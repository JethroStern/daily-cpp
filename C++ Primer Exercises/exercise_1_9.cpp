// exercise_1_9.cpp : This program will use a while loop to sum the numbers from 50-100.
//

#include <iostream>

int main()
{
    int sum = 0, val = 50;
    // Keep executing the while as long as val is less than or equal to 100.
    while (val <= 100) {
        sum += val;     // assigns sum + val to sum.
        ++val;          // add 1 to val
    }
    std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;

    return 0;
}

