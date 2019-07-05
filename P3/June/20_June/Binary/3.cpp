/* Diameter of binary tree */

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left ,*right;
};
int max3(int a, int b, int c)
{
    if(a > b && a > c)
        return a;
    else if(b > a && b > c)
        return b;
    else
        return c;
}

int height(node *root)
{
    if(root == NULL)
        return 0;

    return max(height(root->left),height(root->right)) + 1;
}

int diameter(node *root)
{
    if(root == NULL)
        return 0;

    return max3(height(root->left)+height(root->right), diameter(root->left), diameter(root->right));
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
    (root->left)->right =temp2;

    node *temp3 = new node();
    temp3->data = 6;
    (root->right)->right =temp3;

    node *temp4 = new node();
    temp4->data = 5;
    (root->right)->left =temp4;

    node *temp5 = new node();
    temp5->data = 7;
    ((root->right)->right)->left =temp5;

    cout << diameter(root);
}
