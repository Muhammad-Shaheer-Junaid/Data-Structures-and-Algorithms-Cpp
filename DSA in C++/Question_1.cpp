#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;

    cout << "Enter a number till which you want to calculate Sum: " << endl;
    cin >> n;

    // Uisng FOR Loop

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum: " << sum << endl;

    // Uisng While Loop
    int num;
    int add = 0;
    int count = 0;

    cout << "Enter a number till which you want to calculate Sum: " << endl;
    cin >> num;

    while (count <= num)
    {
        count++;
        add += count;
    }
    cout << "Sum: " << add << endl;
    return 0;
}