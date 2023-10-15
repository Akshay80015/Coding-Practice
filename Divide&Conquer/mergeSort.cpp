#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string.h>

using namespace std;

void merge(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - (mid + 1) + 1;

    int *left = new int[len1];
    int *right = new int[len2];

    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k];
        k++;
    }

    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k];
        k++;
    }

    int leftIndex = 0, rightIndex = 0;
    int mainIndex = s;

    while (leftIndex < len1 && rightIndex < len2)
    {
        if (left[leftIndex] < right[rightIndex]) // Use <= instead of < for stability
        {
            arr[mainIndex] = left[leftIndex];
            leftIndex++;
        }
        else
        {
            arr[mainIndex] = right[rightIndex];
            rightIndex++;
        }
        mainIndex++;
    }

    while (leftIndex < len1)
    {
        arr[mainIndex] = left[leftIndex];
        leftIndex++;
        mainIndex++;
    }
    while (rightIndex < len2)
    {
        arr[mainIndex] = right[rightIndex];
        rightIndex++;
        mainIndex++;
    }

    // delete[] left;
    // delete[] right;
}

void mergesort(int arr[], int s, int e)
{
    if (s >= e)
        return;

    int mid = s + (e - s) / 2;

    mergesort(arr, s, mid);

    mergesort(arr, mid + 1, e);

    merge(arr, s, e);
}

int main()
{
    int arr[8] = {1, 3, 2, 6, 5, 77, 34, 22};
    int s = 0;
    int e = 7;

    mergesort(arr, s, e);
      for(int i =0;i<8 ;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}