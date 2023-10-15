#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

class Queue{
    public:
        int *arr;
        int size;
        int front;
        int rear;
    
    Queue(int size){
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    void push(int data)
    {
        if(rear == size)
        {
            cout<<"Queue is full"<<endl;
            return;
        }else 
        {
            arr[rear] = data;
            rear++;
        }
    }
    void pop()
    {
        if(front == rear)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front = 0;
                rear = 0;
            }
        }
    }

    bool isempty()
    {
        if(front == rear)
        {
            return true;
        }
        else
        return false;
    }

    int getSize()
    {
        int n = rear -front;
        return n;
    }

    int getFront()
    {
        if(front == rear)
        {
            cout<<"queue is empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
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


};

int main()
{
    Queue q(5);
    
    q.push(2);
    q.push(12);
    q.push(123);
    q.push(21);
    q.push(45);

    cout<<q.getSize()<<endl;
    q.print();

    q.pop();
    cout<<q.getSize()<<endl;
    q.print();

    if(q.isempty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    return 0;
}