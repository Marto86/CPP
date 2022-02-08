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





void findLongestSequence(const std::array< int, maxSize>& arr ,
    int arrSize, 
    int& frequentNumber,
    int& numberRepsCount)
{
    frequentNumber = arr[0];
    numberRepsCount = 1;
    int currentRespCount = 1;
	for (int i = 1; i < arrSize - 1; ++i)
	{
		if (arr[1] == arr[i + 1])
		{
            currentRespCount++;
            continue;
		}
		if (currentRespCount >= numberRepsCount)
		{
            numberRepsCount = currentRespCount;
            frequentNumber = arr[i];
		}
        currentRespCount = 1;
	}


}
void printOutput(int& frequntNumber, int& numberRespCount)
{

    for (int i = 0; i <= numberRespCount; ++i)
    {
        std::cout << frequntNumber << ' ';
    }
    std::cout << std::endl;
}

int main()
{
    int frequentNumber = 0;
    int numberRepsCount = 0;
    int arrSize = 0;
    const std::array< int, maxSize> arr = readInput(arrSize);
    findLongestSequence(arr,arrSize,frequentNumber,numberRepsCount);
    printOutput(frequentNumber, numberRepsCount);

    return 0;
}

