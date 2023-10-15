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

Node* middleNode(Node* &head)
{
     if(head == NULL) {
        cout << "LL is empty" << endl;
        return head;
    }
    if(head -> next == NULL) {
        //only 1 node in LL
        return head;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow= slow->next;
        }
    }
    return slow;
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
    
    Node* middle =middleNode(first);
    cout<<middle->data<<endl;


    return 0;
}