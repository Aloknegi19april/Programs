#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left ,*right;
};

int height(node *root)
{
    if(root == NULL)
        return 0;

    return max(height(root->left),height(root->right))+1;
}

int main()
{
    node *root = new node();
    root->data = 5;
    node *temp = new node();
    temp->data = 15;
    root->left = temp;
    node *temp1 = new node();
    temp1->data = 21;
    (root->left)->left = temp1;
    node *temp2 = new node();
    temp2->data = 20;
    root->right = temp2;
    node *temp3 = new node();
    temp3->data = 17;
    (root->right)->right = temp3;

    cout << height(root);
}
