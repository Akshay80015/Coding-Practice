#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    int ans = n*factorial(n-1);

    return ans;
}

int main()
{
    int n ;
    cin>>n;
    cout<< factorial(n) <<endl;
    return 0;
}