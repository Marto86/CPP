#include <iostream>
#include <array>

const int maxSize = 200;

int main()
{

    const std::array<int, maxSize> readInput(int& actualArrSize);
    bool areEqual(const std::array<int, maxSize> &arr1, int length1, const std::array<int, maxSize> &arr2, int length2);

    int arr1Size = 0;
    const std::array<int, maxSize> arr1 = readInput(arr1Size);
    int arr2Size = 0;
    const std::array<int, maxSize> arr2 = readInput(arr2Size);

    const bool result = areEqual(arr1, arr1Size, arr2, arr2Size);
	 if (result)
    {
        std::cout << "equal" << std::endl;
    }
    else
    {
        std::cout << "not equal" << std::endl;
    }
    return 0;
}

const std::array<int, maxSize> readInput(int& actualArrSize)
{
    std::array<int, maxSize> arr{};
    std::cin >> actualArrSize;
    for (int i = 0; i < actualArrSize; ++i)
    {
        std::cin >> arr[i];
    }
    return arr;
}
bool areEqual(const std::array<int, maxSize>& arr1, int length1, const std::array<int, maxSize>& arr2, int length2)
{
    if (length1 != length2)
    {
        return false;
    }
    for (int i = 0; i < arr1.size(); ++i)
    {
        if (arr1[i] != arr2[i])
        {
            return false;
        }
    }
    return true;
}