#include <iostream>
using namespace std;

int main()
{
    cout << "Enter your target number:" << endl;
    int toSearch;
    cin >> toSearch;

    int linearSearchArray[] = {10, 20, 30, 40, 50}; //Array
    int size = sizeof(linearSearchArray) / sizeof(linearSearchArray[0]);
    int index = -1;

    for (int i = 0; i < size; i++)
    {
        if (linearSearchArray[i] == toSearch)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        cout << "Element found! \nAt index: " << index << endl;
    }
    else
    {
        cout << "Element not found!" << endl;
    }

    return 0;
}