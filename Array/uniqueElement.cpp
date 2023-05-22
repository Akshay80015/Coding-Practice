#include<iostream>
#include<vector>

using namespace std;

int unique(vector<int> arr)
{
    int ans = 0;
    for(int i =0;i<arr.size();i++)
    {
        ans = ans^arr[i];
    }
    return ans ;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans = unique(arr);
    cout<<"Final ans "<<ans<<endl;
    
    

    return 0;
}