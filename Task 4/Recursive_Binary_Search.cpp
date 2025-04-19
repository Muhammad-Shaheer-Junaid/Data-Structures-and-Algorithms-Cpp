#include <iostream>
using namespace std;

int recursiveBinarySearch(int arr[], int left, int right, int targetNumber)
{
    if (left > right)
    {
        return -1;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == targetNumber)
    {
        return mid;
    }
    if (arr[mid] < targetNumber)
    {
        return recursiveBinarySearch(arr, mid + 1, right, targetNumber);
    }
    else
    {
        return recursiveBinarySearch(arr, left, mid - 1, targetNumber);
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetNumber;

    cout << "Enter a Target number: " << endl;
    cin >> targetNumber;

    int output = recursiveBinarySearch(arr, 0, size - 1, targetNumber);

    if (output != -1)
    {
        cout << "Target number found at index: " << output << endl;
    }
    else
        cout << "Target number not found!" << endl;

    return 0;
}