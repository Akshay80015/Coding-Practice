#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

void counting(int n)
{
    if(n==0)
        return;
    
   
    counting(n-1);

    cout<<n<<" ";
    
}

int main()
{
    int n;
    cin>>n;
    counting(n);
    return 0;
}