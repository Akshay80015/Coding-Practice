#include<iostream>
using namespace std;

int divide (int dividend,int divisor)
{
    int s = 0;
    int e = dividend;
    int mid = s + (e-s)/2;
    int ans = 0;
    while (s<=e)
    {
        if (mid*divisor == dividend)
            return mid;
        else if(mid*divisor>dividend)
            e = mid -1;
        else 
        {
            ans = mid;
            s = mid +1;
        }
        mid = s + (e-s)/2;
    }
    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))
        return ans;
     else 
        return -ans;


}

int main() 
{
    int dividend,divisor;
    cin>> dividend>> divisor;

    int ans = divide(dividend,divisor);
    cout<<ans;
    
    return 0;
}