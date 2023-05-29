#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;

int binarySearch(vector<int> arr,int start, int end, int target){
    int s= start; 
    int e = end;
    int mid = s+ (e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==target)
        {
            return mid;
        }
        else if (target> arr[mid])
        {
            s = mid+1;
        }
        else
         e = mid -1;
         mid = s+ (e-s)/2;
        
    }
    return -1;
}
int exponentialSearch(vector<int> arr, int x )
{
    int n = arr.size();
    if (arr[0]==x)
        return 0;
    int i =1;
    while(i<arr.size()&&arr[i]<=x)
    {
        i = i*2;
    }
   return  binarySearch(arr, i/2, min(i,n-1),x);

}

int main()
{
    vector<int> arr{3,4,5,6,11,13,14,15,56,70};
    cout<<exponentialSearch(arr,13)<<endl;

    return 0;
}