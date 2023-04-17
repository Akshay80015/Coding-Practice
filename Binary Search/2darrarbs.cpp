#include<iostream>
using namespace std;

bool binarySearch(int arr[][4], int row , int col, int target)
{
    int s = 0;
    int e = row *col -1;
    int mid = s + (e-s)/2;
    while (s<=e)
    {
        int rowIndex = mid/col;
        int colIndex = mid%col;
        int element = arr[rowIndex][colIndex];

        if(element == target )
            return true;
        else if (target>element)
            s = mid +1;
        else
            e = mid -1 ;

        mid = s + (e-s)/2;
    }
    return false ;
}


int main()
{
    int arr[5][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12}, {13,14,15,16}, {17,18,19,20}};
    bool ans = binarySearch(arr,5,4,142);

    if(ans==true )
    cout<<"Found"<<endl;
    else
    cout<<"Not found"<<endl;
    

    return 0;
}