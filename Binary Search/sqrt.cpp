#include<iostream>
using namespace std;

int sqrt(int value)
{
    int s = 0;
    int e = value;
    int mid = s + (e-s)/2;
    int ans = -1;
    while (s<=e)
    {
        if(mid*mid==value)
            return mid;
       else  if (value>mid*mid)
       {
        ans = mid;
        s = mid +1;
       }
       else
       e = mid - 1;
        mid = s + (e-s)/2;

    }
    return ans ;
}

int main()
{
    int n ;
    cin>> n;
    
    int ans = sqrt(n);
    cout<<ans<<endl;

    
    // cin>>precision;
    
    float step = 0.1;
    double finalans= ans;

    for(int i = 0; i<2;i++)
    {
        for(double j = finalans ;j*j<=n;j=j+step )
            finalans=j;
            step = step/10;
    }
    cout<<finalans;
    return 0;
}