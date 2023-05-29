#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include<set>

using namespace std;

// double pointer approach
// int kdiff(vector<int> arr, int k)
// {
//     sort(arr.begin(), arr.end());

//     int i = 0, j = 1;
//     set<pair<int, int>> ans;

//     while (j < arr.size())
//     {
//         int diff = abs(arr[i] - arr[j]);
//         if (diff == k)
//         {
//             ans.insert({arr[i], arr[j]});
//             i++, j++;
//         }
//         else if (diff > k)
//             i++;
//         else if (diff < k)
//             j++;
//         if (i == j)
//             j++;
//     }
    
//     for(auto i: ans)
//      cout<<i.first<<" "<<i.second<<endl;

//     return ans.size();
// }

// binarySearch

bool binarySearch(vector<int> arr, int target,int start)
{
    int s = start;
    int e = arr.size()-1;
    int mid = s + (e-s)/2;

    while(s<=e)
    {
        if(arr[mid]==target)
            return 1;
        else if(arr[mid]>target)
            e = mid -1;
        else
            s = mid+1;

        mid = s + (e-s)/2;
 
    }
    return 0;
}

int kdiff(vector<int> arr, int k)
{
    sort(arr.begin(),arr.end());
    set<pair<int,int>> ans;
    for(int i =0;i<arr.size();i++)
    {
        if(binarySearch(arr,arr[i]+k,i+1) != 0)
        ans.insert({arr[i],arr[i]+k});

    }
    
    return ans.size();


}


int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
   cout<<"Answer is "<< kdiff(arr, 2);

    return 0;
}