#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

class CirQueue{
    public:
        int * arr;
        int size;
        int front;
        int rear;
    CirQueue(int size)
    {
        this ->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push(int data)
    {
        if(front == 0 && rear == size-1){
            cout<<"Queue is full"<<endl;
        }
        else if(front==-1)
        {
            front = rear =0;
            arr[rear] = data;
            
        }
        else if(rear==size&&front!=0)
        {
            rear =0;
            arr[rear] = data;
        }
        else
        {
            rear ++;
            arr[rear] = data;
           
            
        }
        
    }

    void pop()
    {
        if(front==-1)
        {
            cout<<"Queue is empty"<<endl;

        }
        else if(front==rear)
        {
            arr[front] =-1;
            front = rear = -1;
            
        }
        else if( front == size-1)
        {
            front = 0;
        }
        else{
            arr[front ]= -1;
            front++;
        }
    }

     void print()
    {
        for(int i =0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
        int getSize()
    {
        int n = rear -front;
        return n;
    }
    bool isEmpty()
    {
        if(front == rear)
        {
            return true;
        }
        else
            return false;
    }
};

int main()
{
    CirQueue q(5);
    q.push(1);
    q.push(12);
    q.push(3);
    q.push(14);
    q.push(15);
    q.push(16);

    q.print();

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.print();
   if(q.isEmpty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}