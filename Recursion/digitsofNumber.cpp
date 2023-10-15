#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

void printDigits(int n)
{
    if(n==0)
    {
        return;
    }
    
    
    printDigits(n/10);

    int ans = n%10;
    cout<<ans<<" ";


}
 
int main()
{
    int n = 647;
    printDigits(n);
    // cout<<n;
    return 0;
}