#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <string.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prv;

    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prv = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prv = NULL;
    }
};

void printList(Node *&head)
{
    if (head == NULL)
    {
        cout << "Empty DLL" << endl;
        return;
    }
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prv = newNode;
        head = newNode;
    }
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        tail->next = newNode;
        newNode->prv = tail;
        tail = newNode;
    }
}

int lengthOfList(Node *&head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void insertAtAnyPos(Node *&head, Node *&tail, int data, int pos)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        if (pos == 1)
        {
            insertAtHead(head, tail, data);
            return;
        }
        int len = lengthOfList(head);
        if (pos > len)
        {
            insertAtTail(head, tail, data);
            return;
        }
        int i = 1;
        Node *prevNode = head;
        while (i < pos - 1)
        {
            prevNode = prevNode->next;
            i++;
        }
        Node *curr = prevNode->next;

        Node *newNode = new Node(data);

        newNode->prv = prevNode;
        prevNode->next = newNode;
        newNode->next = curr;
        curr->prv = newNode;
    }
}
void deleteFromPos(Node* &head, Node* &tail, int position) {
        if(head == NULL) {
                cout << "Linked list is empty";
                return;
        }
        if(head -> next == NULL) {
                //single node
                Node* temp = head;
                head = NULL;
                tail = NULL;
                delete temp;
                return;
        }
        int len = lengthOfList(head);
        if(position > len) {
                cout << "please enter a valid position " << endl;
                return;
        }

        if(position == 1) {
                //want to delete the first node
                Node* temp = head;
                head = head ->next;
                head -> prv = NULL;
                temp ->next = NULL;
                delete temp;
                return;
        }
        
        if(position == len) {
                //delete last node
                Node* temp = tail;
                tail = tail -> prv;
                temp ->prv = NULL;
                tail ->next = NULL;
                delete temp;
                return;
        }

        //delete from middle of linked list

        //step1: find left, curr, right
        int i = 1;
        Node* left = head;
        while( i < position - 1) {
                left = left -> next;
                i++;
        }
        Node* curr = left -> next;
        Node* right = curr -> next;

        //step2:
        left -> next = right;
        //step3:
        right -> prv = left;
        //step4:
        curr -> next = NULL;
        curr ->prv = NULL;
        delete curr;


}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 100);

    printList(head);

    insertAtTail(head, tail, 200);
    insertAtTail(head, tail, 201);
    insertAtTail(head, tail, 202);

    printList(head);

    cout << lengthOfList(head);

    return 0;
}