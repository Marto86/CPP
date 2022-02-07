
#include <iostream>

void greatestDivisor (int num1 , int num2)
{
	for (int i = num1; i >=1; --i)
	{
		if ((0 == num1 % i) && (0 == num2 % i))
		{
            std::cout << i;
            break;
		}
	}
}

int main()
{
    int num1 = 0;
    int num2 = 0;

    std::cin >> num1 >> num2;

    if (num1 > num2)
    {
        greatestDivisor(num2, num1);
    }
    else
    {
	    greatestDivisor(num1,num2);
    }
}

