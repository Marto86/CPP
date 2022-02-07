#include <iostream>

int main()
{
    void sum(int& num1, int& num2);
    void substract(int& num1, int& num2);
    void multiply(int& num1, int& num2);
    void divide(int& num1, int& num2);

    int number1 = 0;
    int number2 = 0;
    char sign = 0;

    std::cin >> number1 >> number2;
   
    std::cin >> sign;

    if (0 == number2)
    {
        std::cout << "Can't divide by zero.";
        return 0;
    }

    if ('+' == sign)
    {
        sum(number1, number2);
    }
    else if ('-' == sign)
    {
        substract(number1, number2);
    }
    else if ('*' == sign)
    {
        multiply(number1, number2);
    }
    else
    {
        divide(number1, number2);
    }

    return 0;
}

void sum(int& num1, int& num2)
{
    std::cout << num1 + num2;
}
void substract(int& num1, int& num2)
{
    std::cout << num1 - num2;
}
void multiply(int& num1, int& num2)
{
    std::cout << num1 * num2;
}
void divide(int& num1, int& num2)
{
    std::cout << num1 / num2;
}