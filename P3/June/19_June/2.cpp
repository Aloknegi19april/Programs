/*
Sum of All data */

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left, *right;
};

int sum(node *root)
{
    if(root == NULL)
        return 0;
    return sum(root->left)+sum(root->right)+root->data;
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
    node *temp2 = new node();
    temp2->data = 2;
    root->right = temp2;
    node *temp3 = new node();
    temp3->data = 7;
    (root->right)->right = temp3;

    cout << sum(root);
}
