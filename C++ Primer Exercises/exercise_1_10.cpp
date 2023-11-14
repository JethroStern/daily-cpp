// exercise_1_10.cpp : This program will write a while loop that prints the numbers from ten down to zero.
#include <iostream>

int main()
{
	int num = 11;
	while (num > 0) {
		-- num;
		std::cout << num << std::endl;
	}
	std::cout << "Done";
}


