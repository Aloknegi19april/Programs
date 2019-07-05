/*
Sum of All data */

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left, *right;
};

int identical(node *root1, node *root2)
{
    if((root1 == NULL)&&(root2 == NULL))
        return 1;

    if((root1)||(root2))
        return 0;

    if(root1->data  == root2->data)
    {
        identical(root1->left,root2->left)&&identical(root1->right, root2->right);
    }
    return 0;
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

    node *root1 = new node();
    root->data = 5;
    node *temp6 = new node();
    temp6->data = 12;
    root->left = temp6;
    node *temp7 = new node();
    temp7->data = 2;
    (root->left)->left = temp7;
    node *temp8 = new node();
    temp8->data = 3;
    (root->left)->right = temp8;
    node *temp9 = new node();
    temp9->data = 2;
    root->right = temp9;
    node *temp11 = new node();
    temp11->data = 7;
    (root->right)->right = temp11;
    node *temp10 = new node();
    temp10->data = 7;
    (root->right)->left = temp10;


    cout << identical(root,root1);
}
