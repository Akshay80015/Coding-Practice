//FULL PYRAMID
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
     for(int i =0;i<n;i++)
    {
        //for spaces 
        for(int j =n-1-i;j>0;j--)
            cout<<" ";
        
        //for stars

        for(int k = i+1;k>0;k--)
            cout<<"* ";
                
        cout<<endl;
        

    }
    for(int i=0;i<n ;i++)
    {
        for(int j=0;j<i;j++)
        cout<<" ";
        for(int k =n-i;k>0;k--)
        cout<<"* ";
        cout<<endl;
    }
    return 0;
}

