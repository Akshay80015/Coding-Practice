#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string.h>

using namespace std;

int getLength(char name[])
{
    int length = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char name[100];
    cin.getline(name, 50);
    // cout<<name<<endl;
    cout << "Length of the String : " << getLength(name) << endl;
    cout << "Length of the String : " << strlen(name) << endl;

    return 0;
}