#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

class Stack{

    
        int *arr;
        int top;
        int size;
    public:
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;

    }

    void push(int data)
    {
        if(size-top>1)
        {
            top++;
            arr[top]=data;
           
        }
        else{
             cout<<"Stack Overflow"<<endl;
        }

    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack Underflow"<<endl;
        }
        else{
            top--;
        }
    }

    int getTop()
    {
        if(top==-1)
        {
            cout<<"There is no element"<<endl;
        }
        else{
            return arr[top];
        }
    }
    int getSize()
    {
        return top+1;
    }
    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }

    void print()
    {
        while ((top>-1))
        {
            cout<<arr[top]<<endl;
            top--;

        }
        
    }

};

int main()
{

    Stack s1(10);

    s1.push(1);
    s1.push(12);
    s1.push(13);
    s1.push(14);


    s1.print();

     s1.pop();

     cout<<"stack is empty? "<<s1.isEmpty();

    return 0;
}