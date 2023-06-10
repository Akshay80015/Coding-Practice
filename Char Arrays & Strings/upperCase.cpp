#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

void upperCase(char name[])
{
    for(int i=0;name[i]!='\0';i++)
    {
        name[i]= name[i]-'a'+'A';
    }

    cout<<name<<endl;
}

int main()
{
    char name[100];
    cin.getline(name,50);
    upperCase(name);


    return 0;
}