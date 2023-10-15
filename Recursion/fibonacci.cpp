#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

int  fib(int n)
{
    if(n==0)
        return 0;
    if(n == 1)
        return 1;
    int ans = fib(n-1)+fib(n-2);
    return ans ;
}

int main()
{
    int n;
    cin>>n;

    for(int i =0;i<n;i++)
    {
        cout<<fib(i)<<" ";
    }


    return 0;
}