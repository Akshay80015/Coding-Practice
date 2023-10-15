#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

Node* reverseLinkedList(Node* head )
{
    Node* cur = head;
    Node* prv = NULL;
    Node* temp;
    while(cur!=NULL)
    {
        temp = cur->next;
        cur->next = prv;
        prv = cur;
        cur = temp;
    }
    return prv;
}

Node* reveseUsingRec(Node* &cur,Node* &prv)
{
    if(cur==NULL)
    {
        return prv;
    }

    Node* temp = cur->next;
    cur->next= prv;
    reveseUsingRec(temp,cur);
}

void print(Node* &head){
    Node* temp = head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;

}

int main()
{
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    first->next=second;
    second->next=third;

    print(first);
    
    Node* head = reverseLinkedList(first);
    print(head);

    Node* cur = head;
    Node* prv =NULL;

    Node* rev = reveseUsingRec(cur,prv);

    print(rev);

    


    return 0;
}