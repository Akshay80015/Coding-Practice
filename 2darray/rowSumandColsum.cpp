#include<iostream>
#include<vector>

using namespace std;

void printRow(int arr[][3], int row, int col)
{
    for(int i =0;i<row;i++)
    {
        int sum = 0;
        for(int j = 0;j<col;j++)
            sum = sum + arr[i][j];
        
        cout<<" Sum of the "<<i<<"th row is "<<sum<<endl;
    }
}

void printCol(int arr[][3], int row, int col)
{
    for(int i =0;i<row;i++)
    {
        int sum =0;
        for(int j = 0;j<col;j++)
            sum = sum + arr[j][i];

         cout<<" Sum of the "<<i<<"th col is "<<sum<<endl;
    }
}
int main()
{
    int arr [3][3] = {  {1,2,3},
                        {4,5,6},
                        {7,8,9}};

    printRow(arr,3,3);
    printCol(arr,3,3);

    return 0;
}