#include<iostream>
#include<limits.h>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr{1,2,3,4,6,8};
    vector<int> brr{3,4,10};

    vector<int> ans;

    for(int i =0;i<arr.size();i++)
    {
        int element = arr[i];
        for(int j = 0;j<brr.size();j++)
        {
            if(arr[i]==brr[j])
               { brr[j]=INT_MIN;
                ans.push_back(arr[i]);}
        }
    }

    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}