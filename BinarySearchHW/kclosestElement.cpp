/*658. Find K Closest Elements
Medium

Given a sorted integer array arr, two integers k and x, return the k closest integers to x in the array. The result should also be sorted in ascending order.

An integer a is closer to x than an integer b if:

|a - x| < |b - x|, or
|a - x| == |b - x| and a < b
 

Example 1:

Input: arr = [1,2,3,4,5], k = 4, x = 3
Output: [1,2,3,4]
Example 2:

Input: arr = [1,2,3,4,5], k = 4, x = -1
Output: [1,2,3,4]*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>

using namespace std;


//binary Search approach

int lowerBound(vector<int> arr, int x)
{
    int s =0;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(arr[mid]==x)
            return mid;
        else if(arr[mid]>x)
        {
            ans = mid;
            e = mid -1;
        }
        else 
        {
            s = mid + 1;
        }
        mid = s + (e-s)/2;

    }
    return ans;
    
}

vector<int> kclosest(vector<int> arr, int k, int x)
{
     int h = lowerBound(arr,x);
     int l = h-1;
     while (h-l<=k)
     {
        if(l<0)
        h++;
        else if(h>=arr.size()-1){
            l--;
        }
        else if(abs(arr[h]-x)>abs(arr[l]-x))
        l--;
        else
        {
            h++;
        }
     }

     vector<int> ans ;
      for(int i = l+1;i<h;i++)
    {
        ans.push_back(arr[i]);
    }

    return ans;

}

//two pointer approach
// vector<int> kclosest(vector<int> arr, int k, int x)
// {

//     int low  = 0;
//     int high = arr.size()-1;

//     while(abs(low-high)>=k)
//     {
//         if(abs(arr[low]-x)>abs(arr[high]-x))
//         {
//             low++;
//         }
//         else
//         {
//             high--;
//         }
//     }
//     vector<int> ans;

//     for(int i = low;i<=high;i++)
//     {
//         ans.push_back(arr[i]);
//     }

//     return ans;
    
// }

int main()
{
    vector<int> arr{12,16,22,30,35,39,42,45,48,50,53,55,56};

    vector<int> answer = kclosest(arr,4,35);

    for(int i =0;i<answer.size();i++)
    {
        cout<<answer[i]<<" ";
    }
    return 0;
}