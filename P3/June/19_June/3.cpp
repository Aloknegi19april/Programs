/*
Sum of All data */

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left, *right;
};

int count(node *root)
{
    if(root == NULL)
        return 0;

    if((root->left == NULL)&&(root->right==NULL))
        return 1;
    return count(root->left)+count(root->right);
}

int main()
{
    node *root = new node();
    root->data = 5;
    node *temp = new node();
    temp->data = 1;
    root->left = temp;
    node *temp1 = new node();
    temp1->data = 2;
    (root->left)->left = temp1;
    node *temp4 = new node();
    temp4->data = 3;
    (root->left)->right = temp4;
    node *temp2 = new node();
    temp2->data = 2;
    root->right = temp2;
    node *temp3 = new node();
    temp3->data = 7;
    (root->right)->right = temp3;
    node *temp5 = new node();
    temp5->data = 7;
    (root->right)->left = temp5;

    cout << count(root);
}
