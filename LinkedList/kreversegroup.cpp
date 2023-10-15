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
void print(Node* &head){
    Node* temp = head;
    
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;

}

int getLength(Node* &head)
{
    Node* temp = head;
    int count =0;
    while (temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
    
}

Node* kreverse(Node* &head,int k )
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
        return head;
    }

    int len = getLength(head);

    if(k>len)
    {
        
        return head;
    }

    Node* cur = head;
    Node* prv = NULL;
    Node* temp;
    int i =0;
    while (i<k)
    {
        temp = cur ->next;
        cur->next = prv;
        prv = cur;
        cur = temp;
        i++;
    }

    if(temp!=NULL)
    {
        Node* ans = kreverse(temp,k);
        head->next = ans;
    }
    return prv;
}


int main()
{

    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next= seventh;

    print(first);
    Node* head = kreverse(first,4);
    print(head);

    return 0;
}