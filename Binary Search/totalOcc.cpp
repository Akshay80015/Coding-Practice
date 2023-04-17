#include<iostream>
#include<vector>
#include<algorithm>

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
int lastocc(vector<int> arr, int target)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if ( target == arr[mid])
            {
                ans = mid;
                s = mid +1;
            }
        if( target > arr[mid])
            s = mid +1;
        else
            e = mid  -1; 

        mid = s + (e-s)/2;

    }
    return ans ;
}


int main()
{
     vector<int> arr ={5,7,7,7,8,8,10};
    // int first = firstOcc(arr, 7);
    // int last = lastocc(arr,7);
    // int totalOcc = last-first + 1;
    // cout<<"Total Occurrence is "<<totalOcc;
    int low = lower_bound(arr.begin(),arr.end(),8)-arr.begin();
    int upper = upper_bound(arr.begin(),arr.end(),8)-arr.begin();
    int totalOcc = upper-low;
    cout<<totalOcc;

    return 0;
}