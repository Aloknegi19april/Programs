/*
preorder */

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left ,*right;
};

void inOrder(node *root)
{
    if(root == NULL)
        return;

    cout << root->data << " ";
    inOrder(root->left);
    inOrder(root->right);
}


int main()
{
    node *root;
    root = new node();
    root->data = 1;

    node *temp = new node();
    temp->data = 2;
    root->left = temp;

    node * temp1 = new node();
    temp1->data = 3;
    root->right = temp1;

    node *temp2 = new node();
    temp2->data = 4;
    (root->left)->left =temp2;

    node *temp3 = new node();
    temp3->data = 5;
    (root->left)->right =temp3;

    node *temp4 = new node();
    temp4->data = 6;
    (root->right)->left =temp4;

    node *temp5 = new node();
    temp5->data = 7;
    (root->right)->right =temp5;

    inOrder(root);
}
