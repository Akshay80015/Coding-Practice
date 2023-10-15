#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

bool Issorted(vector<int>& arr, int s,int n)
{
    if(s==n-1)
        return true;
    if(arr[s]>arr[s+1])
        return false;
    
    return Issorted(arr,s+1,n);
}

void inputOutput(vector<int> &arr, int &n)
{
    
    for(int i =0;i<n;i++)
    {
        int num;
       cin>>num;
       arr.push_back(num); 
    }

     for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    vector<int> arr;
    cout<<" Enter the size of array "<<endl;
    int n;
    cin>>n;
    inputOutput(arr,n);

    if(Issorted(arr,0,n))
    {
        cout<<"It is sorted"<<endl;
    }
    else
    cout<<"It is not sorted"<<endl;

    return 0;
}