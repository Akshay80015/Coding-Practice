#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>

using namespace std;

// int firstRepeating(vector<int> arr)
// {
//     unordered_map<int,int> hash;
//     for(int  i =0;i<arr.size();i++)
//     {
//         hash[arr[i]]++;
//     }
//     for(int i =0;i<arr.size();i++)
//     {
//         if(hash[arr[i]]>1)
//             return i+1;
//     }
//     return -1;
// }


int firstRepeating(vector<int> arr)
{
   int maxi = *max_element(arr.begin(), arr.end()) ; 
  
    int hash[100]={0};

    for(int i =0;i<maxi+1;i++)
    {
        hash[arr[i]]++;
    }

    for(int i =0;i<maxi+1;i++)
    {
        if(hash[arr[i]]>1)
            return i+1;
    }
    return -1;





}


int main()
{
    vector<int> arr{1, 5, 3, 4, 3, 5, 6};
    cout<<"Firstrepeating element is at index "<<firstRepeating(arr);
    return 0;
}