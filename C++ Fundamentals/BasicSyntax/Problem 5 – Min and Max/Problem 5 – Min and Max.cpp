
#include <iostream>
#include <string>
#include<limits>
#include <array>


int main() {

	int max = std::numeric_limits<int>::min();
	int min = std::numeric_limits<int>::max();
	int nums = 0;

	std::cin >> nums;
	std::cin.ignore();
	int numbers[nums];
	for (int i = 0; i < nums; ++i)
	{
		int number;
		std::cin >> number;
		std::cin.ignore();

		if (min > number)
		{
			min = number;
		}
		if (max < number)
		{
			max = number;
		}
	}

	std::cout << min << " " << max;
}
