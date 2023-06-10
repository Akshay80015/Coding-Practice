// Replace Spaces with @ symbol

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

void replaceSpace(char name[])
{
    for(int i =0;name[i]!='\0';i++)
    {
        if(name[i]==' ')
        {
            name[i]='@';
        }
    }
    cout<<name <<endl;
}

int main()
{
    char name[100];
    cin.getline(name,50);
    replaceSpace(name);

    return 0;
}