

#include <iostream>

int main()
{
	int number = 0;
	std::cout << "Please enter the number\n";
	std::cin >> number;

	for (int i = 1; i <= number; i++)
	{
		std::cout << i << " ";
	}

	return 0;
}


