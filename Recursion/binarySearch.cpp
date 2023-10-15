#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string.h>

using namespace std;

int binarySearch(vector<int> &arr, int &s, int &e, int &target)
{
    if (s > e)
        return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == target)
        return mid;
    if (target > arr[mid])
    {
        s = mid + 1;
        binarySearch(arr, s, e, target);
    }
    else
    {
        e = mid - s;
        binarySearch(arr, s, e, target);
    }
}

int main()
{
    vector<int> arr{12, 34, 56, 77, 99};
    int target;
    cout << " Enter the Target : ";
    cin >> target;

    int n = arr.size() - 1;
    int s = 0;

    int ans = binarySearch(arr, s, n, target);
    cout << " Target is found at " << ans << " position" << endl;

    return 0;
}