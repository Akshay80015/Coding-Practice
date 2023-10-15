#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

int powerOftwo(int n)
{
    if (n==0)
    return 1;

    return 2*powerOftwo(n-1);
}

int main()
{
    int n ;
    cin>>n;
    cout<<powerOftwo(n);
    return 0;
}