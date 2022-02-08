#include <iostream>
#include <array>
int main()
{
    void readInput(int& size, int arr[]);
    void searchLongestSequence(int arr[], int& size);
    void printOutput(int& maxSequence, int& element);

    int size = 0;
    int* arr;

    std::cin >> size;
    std::cin.ignore();
    arr = new int[size];

    readInput(size, arr);

    searchLongestSequence(arr, size);

    delete[] arr;

    return 0;
}

void readInput(int& size, int arr[])
{
    for (int i = 0; i < size; ++i)
    {
        std::cin >> arr[i];
    }
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

void searchLongestSequence(int arr[], int& size)
{
    int countSequence = 0;
    int element = 0;
    int maxSequence = 0;

    for (int i = 1; i < size; ++i)
    {
        if (arr[i] == arr[i - 1])
        {
            countSequence++;
        }
        else
        {
            if (maxSequence <= countSequence)
            {
                maxSequence = countSequence;
                element = arr[i - 1];
            }
            countSequence = 0;
        }
    }
    if (maxSequence <= countSequence)
    {
        maxSequence = countSequence;
        element = arr[size - 1];
    }

    printOutput(maxSequence, element);
}

