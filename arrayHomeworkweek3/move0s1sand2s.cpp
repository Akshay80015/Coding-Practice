#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> arr{2,0,2,1,1,0};

    int i =0;
    int j = arr.size()-1;
    int k =0;
    
    while (k<=j)
    {
        if(arr[k]==0)
        {
            swap(arr[i],arr[k]);
            i++,k++;
        }
        else if(arr[k]==1)
        {
            k++;
        }
        else if(arr[k]==2)
        {
            swap(arr[k],arr[j]);
            j--;
        }
    }

   

    for(int i =0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
} 