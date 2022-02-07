
#include <iostream>

int main()
{
	int firstNum = 0;
	int secondNum = 0;
	std::cin >> firstNum >> secondNum;


	if (firstNum < secondNum)
	{
		std::cout << firstNum << ' ' << secondNum << std::endl;
	}
	else
	{
		std::cout << secondNum << ' ' << firstNum << std::endl;
	}





	return 0;
}

