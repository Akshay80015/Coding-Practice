#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

void merge(int arr[],int n,int arr2[],int m)
{
    

    int i =0,j =0,k=0;
    int temp[100];
    while(i<n&&j<m)
    {
        if(arr[i]<arr2[j])
        {
            temp[k]=arr[i];
            k++,i++;
        }
        else if(arr2[j]<arr[i])
        {
            temp[k]=arr2[j];
            k++,j++;
        }
    }
    while(i<n)
    {
        
            temp[k]=arr[i];
            k++;
            i++;
        
    }
    while(j<m)
    {
        
            temp[k]=arr2[j];
            k++;
            j++;
        
    }

    for(int i =0;i<m+n;i++)
    {
        cout<<temp[i]<<" ";
    }
}

int main()
{
    int arr[3]={2,4,6};
    int arr2[5]={3,5,7,9,11};

    merge(arr,3,arr2,5);

    return 0;
}