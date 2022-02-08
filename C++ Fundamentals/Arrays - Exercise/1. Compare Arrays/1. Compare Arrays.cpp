#include <iostream>
#include <array>

const int maxSize = 1000;

bool areEqual(const std::array<int, maxSize>& arr1, int length1,
	const std::array<int, maxSize>& arr2, int length2)
{
	if (length1 != length2)
	{
		return false;
	}

	for (int i = 0; i < length1; ++i)
	{
		if (arr1[i] != arr2[i])
		{
			return false;
		}
	}

	return true;
}
const std::array<int, maxSize> readInput(int& actualSize)
{
	std::array<int, maxSize>arr;

	std::cin >> actualSize;
	for (int i = 0; i < actualSize; ++i)
	{
		std::cin >> arr[i];
	}

	return arr;
}




int main()
{
	int arrOneSize = 0;
	const std::array<int, maxSize> arrOne = readInput(arrOneSize);
	int arrTwoSize = 0;
	const std::array<int, maxSize> arrTwo = readInput(arrTwoSize);

	const bool result = areEqual(arrOne, arrOneSize, arrTwo, arrTwoSize);
	if (result)
	{
		std::cout << "Equal" << std::endl;
	}
	else
	{
		std::cout << "Not Equal" << std::endl;
	}
	return 0;
}




