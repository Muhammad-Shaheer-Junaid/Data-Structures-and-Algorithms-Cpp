#include <iostream>
using namespace std;

int main()
{
    int SelectionsortArray[] = {1, 9, 8, 2, 7, 3, 6, 4, 5}; // Array

    int minIndex;

    int size = sizeof(SelectionsortArray) / sizeof(SelectionsortArray[0]);

    cout << "Unsorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << SelectionsortArray[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        minIndex = i;

        for (int j = i + 1; j < size; j++)
        {
            if (SelectionsortArray[j] < SelectionsortArray[minIndex])
            {
                minIndex = j;
            }
        }

        if (minIndex != i)
        {
            swap(SelectionsortArray[i], SelectionsortArray[minIndex]);
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << SelectionsortArray[i] << " ";
    }

    return 0;
}