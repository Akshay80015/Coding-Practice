#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,6};
    

    int value =arr[ arr.size()-1];
    int i = arr.size()-1;
    while(i>0)
    {
        arr[i]=arr[i-1];
        i--;
    }
    arr[i]=value;

    for(auto i : arr){
        cout<<i<<" ";
    }

    return 0;
}