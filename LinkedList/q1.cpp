#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

class Node {
    public:
        int data;
        Node* next;
    
    Node(){
        this->data=0;
        this->next= NULL;
    }
    Node (int data)
    {
        this->data=data;
        this->next= NULL;

    }
    ~ Node()
    {

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

void insertatHead(Node* &head,Node* &tail,int data){
    if(head==NULL)
    {
        Node* newNode = new Node(data);
        head= newNode;
        tail= newNode;
    }
    else{
        Node* temp = new Node(data);
        temp->next=head;
        head=temp;
    }

}

void insertAttail(Node* &head,Node* &tail,int data)
{
    if(head==NULL)
    {
        Node* newNode = new Node(data);
        head= newNode;
        tail= newNode;
    }
    else
    {
        Node* newNode = new Node(data);
        tail->next= newNode;
        tail= newNode;
    }
}

int lengthOfLL(Node* &head)
{
    Node* temp = head;
    int length=0;
    while(temp!=NULL)
    {
        temp= temp->next;
        length++;
    }
    return length;
}

void InserAtAnyPos(Node* &head,Node* &tail,int data,int pos)
{
    if(head==NULL)
    {
        Node* newNode = new Node(data);
        head= newNode;
        tail=newNode;
        return;
    }
    if(pos==0)
    {
        insertatHead(head,tail,data);
        return;
    }
    int length = lengthOfLL(head);
    if(pos>=length){
        insertAttail(head,tail,data);
        return;
    }



    Node* prv = head;
    int i = 0;
    while (i<pos)
    {
        prv=prv->next;
        i++;
    }

   
    Node* newNode = new Node(data);
    newNode->next=prv->next;
    prv->next=newNode;
    
}

void deletion(Node* &head,Node* &tail,int position)
{
    if(head==NULL)
    {
        cout<<"Linked List is empty"<<endl;
        return;
    }
    if(position==1)
    {
        Node* temp = head;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return; 
    }
    int len=lengthOfLL(head);
    if(position>len)
    {
        cout<<"out of bound"<<endl;
        return;
    }

    if(len==position){
        int i =0;
        Node* cur = head;
        Node* prv;
        while(i<position-1)
        {
            prv = cur;
            cur=cur->next;
            i++;
        }

        prv->next = NULL;
        tail=prv;
        cur->next=NULL;
        delete cur;

    }



   Node* cur = head;
   Node* prv;
   int i=0;

   while(i<position-1)
   {
    prv = cur;
    cur = cur->next;
    i++;
   }

    prv->next=cur->next;
    cur->next=NULL;
    delete cur;



}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    // node5->next=NULL;
    insertatHead(head,tail,20);
    insertatHead(head,tail,30);
    insertatHead(head,tail,40);
    insertatHead(head,tail,50);
    // insertatHead(node1,50);
    insertAttail(head,tail,120);
    insertAttail(head,tail,190);
    insertAttail(head,tail,200);

    InserAtAnyPos(head,tail,100,1);
    InserAtAnyPos(head,tail,101,0);
    InserAtAnyPos(head,tail,110,3);
    // InserAtAnyPos(head,tail,10,2);
    

    print(head);

    deletion(head,tail,9);

     print(head);



    return 0;
}