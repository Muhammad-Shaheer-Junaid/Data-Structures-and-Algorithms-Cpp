#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int linearSearch(int target, vector<int> &arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int binarySearch(int target, vector<int> &arr) {   
    sort(arr.begin(),arr.end());
    int start = 0, end = arr.size() - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (target > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> numbers = {1, 5, 8, 11, 45};
    cout << "key 11 is found at index using Linear Search : " << linearSearch(11, numbers) << endl;
    cout << "key 11 is found at index Binary Search : " << binarySearch(11, numbers) << endl;
}
