#include<iostream>
#include<vector>
#include<limits.h>
#include<algorithm>

using namespace std;

// int findMissing(vector<int> arr)
// {
//     for(int i =0;i<arr.size();i++)
//     {
//         int index = abs(arr[i]);
        
//         if(arr[index-1]>0)
//         {
//             arr[index-1] *= -1;
//         } 


//     }
//     int ans;
//     for(int i =0;i<arr.size();i++)
//     {
//         if(arr[i]>0)
//        { 
//         ans = i+1;
//         }
//     }
//     return ans;
// }

int findMissing(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    int ans ;

    for(int i =0;i<arr.size();i++)
    {
        if(arr[i]!=i+1)
            ans = i+1;

    }
    return ans ;

}


int main()
{
    vector<int> arr {1,2,2,3,4};
    cout<<"the missing element is "<<findMissing(arr);
    return 0;
}