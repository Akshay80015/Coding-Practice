#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5};
    int sizear = 5;
    int brr[3]={1,2,3};
    int sizebr = 3;

    vector<int> ans ;

    for(int i =0;i<sizear;i++)
    {
        ans.push_back(arr[i]);
    }

    for(int i =0;i<sizebr;i++)
    {
        ans.push_back(brr[i]);
    }

    for(int i =0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}