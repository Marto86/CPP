

#include <iostream>
#include <cmath>

int main()
{
	double a = 0.0;
	double b = 0.0;
	double c = 0.0;

	const double d = std::pow(b, 2) - 4 * a * c;

	if (0 > d)
	{
		std::cout << "no roots";
		return 0;
	}else if (0 == d)
	{
		const double x1 = ((-b) + std::sqrt(d)) / (2 * a);
		std::cout << x1;
		return 0;
	}
	else
	{
		const double x1 = ((-b) + std::sqrt(d)) / (2 * a);
		const double x2 = ((-b) - std::sqrt(d)) / (2 * a);
		std::cout << " " << x2;
	}
	return 0;
}


