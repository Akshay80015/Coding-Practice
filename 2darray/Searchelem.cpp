#include<iostream>
#include<vector>

using namespace std;


bool Search(int arr[][3], int row , int col, int key)
{
    for(int i =0;i<row;i++)
    {
        for(int j =0;j<col;j++)
        {
            if(arr[i][j]==key)
                return true;

        }
    }
    return false;
}

int main()
{
    int arr [3][3] = {  {1,2,3},
                        {4,5,6},
                        {7,8,9}};

    cout<<Search(arr,3,3,6)<<endl;

    return 0;
}