#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string.h>

using namespace std;

void reverseString(char name[])
{
    for (int i = 0, j = strlen(name) - 1; i < j; i++, j--)
    {
        swap(name[i], name[j]);
    }
    cout << name << endl;
}
int main()
{
    char name[100];
    cin.getline(name, 50);
    // cout<<name<<endl;
    // cout<<"Length of the String : "<<getLength(name)<<endl;
    // cout<<"Length of the String : "<<strlen(name)<<endl;

    reverseString(name);

    return 0;
}