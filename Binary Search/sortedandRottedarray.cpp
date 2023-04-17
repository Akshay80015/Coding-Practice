#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int> arr, int start,int end,int target)
{
    int s=start;
    int e = end;
    int mid = s+(e-s)/2;
    while(s<=e)
    {
        if(target==arr[mid])
        return mid ;
        else if (target>arr[mid])
        s = mid +1;
        else
        e = mid -1;
        mid = s+(e-s)/2;
    }
    return -1;
}

int pivot(vector<int> arr)
{
    int s =0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        if(mid+1<arr.size()&&arr[mid]>arr[mid+1])
            return mid;
        if(mid-1>=0&&arr[mid]<arr[mid-1])
            return mid -1;
        if(arr[s]>arr[mid])
            e = mid - 1;
        else
            s = mid ;

        mid = s + (e-s)/2;
    }
    return s;
}

int main()
{
    vector<int> arr ={4,5,6,7,0,1,2};
    int pivotele = pivot(arr);

    int target ;
    cin>> target;
        // int ans ;
    if(target>=arr[0]&&target<=arr[pivotele])
       cout<<binarySearch(arr,0,pivotele,target);
    if(pivotele+1<arr.size() && target>=arr[pivotele+1]&&target<arr.size()-1)
        cout<<binarySearch(arr,pivotele+1,arr.size()-1,target);
    
    // cout<<"Element is at Index "<<ans<<endl;


    return 0;
}