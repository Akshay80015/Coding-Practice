#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

void maxi(vector<int> arr,int s,int e,int& max)
{
    
    if(s>=e)
        return ; 
    if(arr[s]>max)
        max = arr[s];

    return maxi(arr,s+1,e,max);
}
void mini(vector<int> arr, int s, int e , int & min){
    if(s>=e)
        return;
    if(arr[s]<min)
    {
        min = arr[s];
    }
    return mini(arr,s+1,e,min);
}

int main()
{
    vector<int> arr{1,5,3,210,23};
    int max = INT_MIN;
    int min = INT_MAX;

    for(auto i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    maxi(arr,0,4,max);
    mini(arr,0,4,min);
    cout<<max <<endl;
    cout<<min<<endl;
    return 0;
} 