#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>
#include<stack>


using namespace std;

void middleElem(stack<int> &s, int &totalsize)
{
    if(s.size()==0){
        cout<<"Stack is empty"<<endl;
        return;
    }
    if(s.size()==(totalsize/2)+1)
    {
        cout<<"Middle element is "<<s.top()<<endl;
        return;
    }
    int temp = s.top();
    s.pop();
    middleElem(s,totalsize);
    s.push(temp);

}

int main()
{
    stack<int> s;
    s.push(10);
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);


    int totalsize = s.size();
    middleElem(s,totalsize);

    return 0;
}

