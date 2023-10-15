#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

int main()
{

    int arr[] = {8,1,3,2,20,50,30};
    int n = 7;
    int s = 0;
    int e = n-1;

    quickSort(arr, s , e);
    return 0;
}