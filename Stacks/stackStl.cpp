#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>
#include<stack>

using namespace std;

int main()
{
    stack<int> s;
    
    s.push(20);
    s.push(21);
    s.push(22);
    s.push(23);
    s.push(24);
    
    cout<<s.top()<<endl;;

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    
    return 0;
}