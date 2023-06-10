#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>


using namespace std;

bool palindrome(char name[])
{
    for(int i =0,j=strlen(name)-1;i<=j;i++,j--)
    {
        if(name[i]!=name[j])
            return false;
        
    }
    return true;

    
}

int main()
{
    char name[100];
    cin.getline(name,50);
    if(palindrome(name))
    {
        cout<<"It is a Palindrome"<<endl;
    }
    else
    {
        cout<<"It is not a Palindrome"<<endl;
    }

    return 0;
}