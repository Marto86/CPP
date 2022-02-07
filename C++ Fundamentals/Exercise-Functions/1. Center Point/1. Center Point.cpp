#include <iostream>
#include <cmath>

int main()
{
    void getInput(double& cordinate);
    bool compareDistance(double& x1, double& y1, double& x2, double& y2);
    void printOutput(double& x, double& y);

    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;

    getInput(x1);
    getInput(y1);
    getInput(x2);
    getInput(y2);

    if (compareDistance(x1, y1, x2, y2))
    {
        printOutput(x1, y1);
    }
    else
    {
        printOutput(x2, y2);
    }

    return 0;
}

void getInput(double& cordinate)
{
    std::cin >> cordinate;
    std::cin.ignore();
}
bool compareDistance(double& x1, double& y1, double& x2, double& y2)
{
    return std::sqrt(std::pow(x1, 2) + std::pow(y1, 2)) < std::sqrt(std::pow(x2, 2) + std::pow(y2, 2));
}
void printOutput(double& x, double& y)
{
    std::cout << "(" << x << ", " << y << ")";
}