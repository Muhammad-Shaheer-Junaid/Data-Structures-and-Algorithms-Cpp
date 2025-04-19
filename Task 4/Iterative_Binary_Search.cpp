#include <iostream>
using namespace std;

int iterativeBinarySearch(int arr[], int size, int targetNumber)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == targetNumber)
        {
            return mid;
        }
        if (arr[mid] < targetNumber)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetNumber;

    cout << "Enter a Target number: " << endl;
    cin >> targetNumber;

    int output = iterativeBinarySearch(arr, size, targetNumber);

    if (output != -1)
    {
        cout << "Target number found at index: " << output << endl;
    }
    else
        cout << "Target number not found!" << endl;

    return 0;
}