#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

class deque{
    public:
    int * arr;
    int size;
    int front;
    int rear;
    deque(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    void push_rear()
    {
        
    }
};

int main()
{
    return 0;
}