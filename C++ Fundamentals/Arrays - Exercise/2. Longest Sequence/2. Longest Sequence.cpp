#include <iostream>
#include <array>

const int maxSize = 1000;



std::array<int, maxSize > readInput(int& actualSize)
{
    std::array<int, maxSize > arr{};

    std::cin >> actualSize;
    if (actualSize >= maxSize)
    {
        std::cout << "Error !!!" << std::endl;
    }

	for (int i = 0; i < actualSize; ++i)
    {
        std::cin >> arr[i];
    }

    return arr;
}





void findLongestSequence(const std::array< int, maxSize>& arr ,int arrSize)
{
    int frequentNumber = 0;
    int numberRepsCount = 0;    
}
void printOutput(int& maxSequence, int& element)
{
    for (int i = 0; i <= maxSequence; ++i)
    {
        if (i == maxSequence)
        {
            std::cout << element;
        }
        else
        {
            std::cout << element << " ";
        }
    }
}

int main()
{
    int arrSize = 0;
    const std::array< int, maxSize> arr = readInput(arrSize);

    return 0;
}

