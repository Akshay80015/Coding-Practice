//Finding duplicate elemenet

#include<iostream>
#include<vector>
using namespace std;

//nive approach

// int findDuplicate(vector<int> arr)
// {
//     int ans =0;
//     for(int i =0;i<arr.size();i++)
//     {
//         for(int j = i+1;j<arr.size();j++)
//         {
//             if(arr[i]==arr[j])
//                 ans = arr[i];
//         }
//     }
   
//     return ans;
// }

//negative marking method 
// int findDuplicate(vector<int> arr)
// {
//     int ans = -1;
//     for(int i=0;i<arr.size();i++)
//     {
//         int index =  abs(arr[i]);
//         if(arr[index]<0)
//         {
//             ans = index;
//             break;
//         }

//         arr[index]=arr[index]*-1;

//     }
//     return ans ;
// }



//posiotioning Method 
int findDuplicate(vector<int> arr)
{
    int i =0;
    while(arr[arr[i]]!=arr[i])
    {
        swap(arr[arr[i]],arr[i]);
    }
    return arr[i];
}

int main()
{
    vector<int> arr { 1,3,3,3,2};

   int answer = findDuplicate(arr);
   cout<<answer<<endl;
    return 0;
}