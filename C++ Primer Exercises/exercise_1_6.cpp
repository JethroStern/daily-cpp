// exercise_1_6.cpp : Explain whether the following program is legal:
// 
// std::cout << "The sum of " << v1;
// << " and " << v2;
// << " is " << v1 + v2 << std::endl;

// The program would not compile due to erroneous placement of a semicolon on the end of the first line,
// and the end of the second line. The code below is rewritten correctly.

#include <iostream>

int main()
{
    int v1 = 1, v2 = 2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;
}

