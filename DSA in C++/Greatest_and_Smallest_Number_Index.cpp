#include <iostream>
using namespace std;

int main()
{
    int nums[] = {5, 15, 22, 1, -15, -24};
    int size = sizeof(nums) / sizeof(nums[0]);
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int index_smallest;
    int index_largest;
    
    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest){
            smallest = nums[i];
            index_smallest = i;
        }
        if (nums[i] > largest){
            largest = nums[i];
            index_largest = i;
        }
    }
    cout << "smallest = " << smallest <<", at index = " << index_smallest << endl;
    cout << "largest = " << largest <<", at index = " << index_largest << endl;
    return 0;
}