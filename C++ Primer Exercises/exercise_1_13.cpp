// exercise_1_13.cpp : Write a program that uses a for to sum the numbers from 50 to 100.
//

#include <iostream>

int main()
{
	int sum = 0;
	for (int i = 50; i <= 100; ++i)
		sum += i;

	std::cout << sum;
}

