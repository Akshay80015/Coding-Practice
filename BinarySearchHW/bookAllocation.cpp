/*
You have N books, each with Ai number of pages. M students need to be allocated contiguous books, with each student getting at least one book. Out of all the permutations, the goal is to find the permutation where the student with the most pages allocated to him gets the minimum number of pages, out of all possible permutations.

Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).
Input:
N = 4
A[] = {12,34,67,90}
M = 2
Output:113
Explanation:Allocation can be done in 
following ways:
{12} and {34, 67, 90} Maximum Pages = 191
{12, 34} and {67, 90} Maximum Pages = 157
{12, 34, 67} and {90} Maximum Pages =113.
Therefore, the minimum of these cases is 113,
which is selected as the output.
*/


#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include <numeric>


using namespace std;

 bool isPossibleSolution(vector<int> A, int N, int M, int mid)
 {
    int pageSum =0;
    int noofStudent = 1;
    for(int i =0;i<N;i++)
    {
        if(A[i]>mid)
        return false;
        if(pageSum+A[i]<=mid)
        {
            pageSum = pageSum+A[i];
        }
        else{
            noofStudent++;
            if(noofStudent>M)
            return false;

            pageSum = A[i];
        }

    }
    return true ;
 }

int bookAllocation(vector<int> A, int N, int M)
{
    if(M>N)
    return -1;

    int s =0;
    int e = accumulate(A.begin(),A.end(),0);
    int mid = (s + e)>>1;
    int ans =-1;
    while(s<=e)
    {
       if( isPossibleSolution(A,N,M,mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid+1;
        }
        mid = (s + e)>>1;

    }
    return ans;
}

int main()
{
    vector<int> arr {12,34,67,90};

    cout<<bookAllocation(arr,4,2);

    return 0;
}