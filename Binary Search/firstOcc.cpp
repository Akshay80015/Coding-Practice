#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if (target==arr[mid])
            {
                ans = mid;
                e = mid -1;

            }
        if (target> arr[mid])
        s = mid + 1;
        else
        e = mid -1;
            
        mid = s + (e-s)/2;
    }
    return ans;
}

int main()
{
    vector<int> arr ={5,7,7,7,8,8,10};
    int ans = firstOcc(arr, 19);
    cout<<"First occurence is at "<<ans;

    return 0;
}