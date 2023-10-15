#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>

using namespace std;

class Node{
    public:
        int data;;
        Node* next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}

bool detectLoop(Node* &head)
{
    if(head == NULL)
    {
        cout<<"LL is empty"<<endl;
        return false;
    }
    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL)
    {
        fast = fast ->next;
        if(fast!=NULL)
        {
            fast= fast->next;
            slow=slow->next;
        }

        if(fast==slow)
        {
            return true;
        }
    }
    return false;
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
    Node* eight = new Node(80);
    Node* ninth = new Node(90);


    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eight;
    eight->next=ninth;
    ninth->next= sixth;

    // printLL(first);

    bool ans=detectLoop(first);

    if(ans)
    {
        cout<<"LOOp is present"<<endl;
    }
    else
    {
        cout<<"Loop is not present"<<endl;
    }


    return 0;
}