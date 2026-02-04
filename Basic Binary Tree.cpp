#include<bits/stdc++.h>
using namespace std;

class Tree
{
public:
    struct Node
    {
        int data;
        Node* left;
        Node* right;
    };
    Node* root;

    Tree()
    {
       root=nullptr;
    }

    Node* createNode(int value)
    {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->left=nullptr;
        newNode->right=nullptr;
        return newNode;
    }
    void createroot(int value){
        if(root!=nullptr){
        cout<<"root already exist";
        return;
        }
        root= createNode(value);
    }

    void createleft(Node* parent,int child){
    if(parent->left!=nullptr){
        cout<<"left already exist";
        return;
    }
    parent->left= createNode(child);
    }

    void creatright(Node* parent,int child){
    if(parent->right!=nullptr){
        cout<<"right already exist";
        return;
    }
    parent->right= createNode(child);
    }



};


int main()
{
    return 0;
}
