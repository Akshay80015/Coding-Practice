#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;
int binary(vector<int>a,int target){
    int start=0;
    int end=a.size();
    int mid= start+(end-start)/2;
    
    while(start<end){
        if(a[mid]==target){
            return mid;
        }
        if(target < a[mid]){
            end=mid-1;
        }
        if(target > a[mid]){
            start=mid+1;
        }
        mid= start+end-start/2;
    }
    return -1;
}
int main()
{
    
    vector<int>a{1,2,3,4};
    int target=2;
    
    int ans=binary(a,target);
    cout<<ans;
    

    return 0;
}

