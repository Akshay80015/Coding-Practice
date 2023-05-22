#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr = {10,20,40,60,70};
    int sum = 80;

    vector <int> ans ;

    for(int i =0;i<arr.size();i++)
    {
        for(int j =i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==sum)
               cout<<"Pair found ("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
    
    return 0;
}
