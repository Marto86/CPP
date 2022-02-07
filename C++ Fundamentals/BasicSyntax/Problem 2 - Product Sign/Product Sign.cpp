#include <iostream>


int main()
{
	double firstNum = 0.0;
	double secondNum = 0.0;
	double thirdNum = 0.0;

	std::cin >> firstNum >> secondNum >> thirdNum;

	int countNegativeNums = 0;
	bool isZero = false;
	bool isNegative = false;

	if (firstNum == 0 || secondNum == 0 || thirdNum == 0)
	{
		isZero = true;
	}
	if (firstNum < 0)
	{
		countNegativeNums++;
	}
	if (secondNum < 0)
	{
		countNegativeNums++;
	}
	if (thirdNum < 0)
	{
		countNegativeNums++;
	}
	if (isZero || (countNegativeNums % 2 == 0))
	{
		std::cout << '+' << std::endl;
	}
	else
	{
		std::cout << '-' << std::endl;
	}

	return 0;

}