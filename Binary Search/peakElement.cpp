#include<iostream>
#include<vector>
using namespace std;

int peakEle(vector<int> arr)
{
    int s = 0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while(s<e)

    {
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
            return mid;
        else if(arr[mid]>arr[mid-1])
            s = mid +1;
        else
            e = mid;
        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    vector<int> arr = {0,10,11,5,2};
    int ans = peakEle(arr);
    cout<<"Answer "<<ans <<endl;
    return 0;
}