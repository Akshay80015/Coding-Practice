#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<string.h>
#include<queue>

using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
    
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};

Node* buildTree()
{
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    if(data==-1)
    {
        return NULL;
    }

    Node* root = new Node(data);

    cout<<"Enter the left child of the "<<data<<" NOde"<<endl;
    root->left=buildTree();

    cout<<"Enter the right child of the "<<data<<" node"<<endl;
    root->right=buildTree();
    return root;
}

void levelOrderTraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

   

    while(!q.empty())
    {
        
        Node* temp = q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
            q.push(NULL);
            }
        }
        else{


            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
    }

   

}
 void inorderTrversal(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        inorderTrversal(root->left);
        cout<<root->data<<" ";
        inorderTrversal(root->right);
        
    }
 void preorderTrversal(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<" ";
        preorderTrversal(root->left);
        preorderTrversal(root->right);
        
    }
 void postorderTrversal(Node* root)
    {
        if(root==NULL)
        {
            return;
        }
        
        postorderTrversal(root->left);
        postorderTrversal(root->right);
        cout<<root->data<<" ";
        
    }

    int height(Node* root)
    {
        if(root==NULL)
        {
            return 0 ;
        }

        int leftHeight = height(root->left);
        int rightheight = height(root->right);
        int ans = max(leftHeight,rightheight)+1;
        return ans;

    }



int main()
{
    Node* root = NULL;
     root = buildTree();
     cout<<"\n levelordertraversal"<<endl;
     levelOrderTraversal(root);
     cout<<"INorderTraversal"<<" "<<endl;
    inorderTrversal(root);
    cout<<"\n PreorderTraversal"<<" "<<endl;
    preorderTrversal(root);
    cout<<"\n PostorderTraversal"<<" "<<endl;
    postorderTrversal(root);
    int heightoftree= height(root);
    cout<<"\n Height of tree is "<<heightoftree<<endl;
    return 0;
}