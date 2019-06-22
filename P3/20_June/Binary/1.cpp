/*
height is balance or not

            1
        2       5
      3   6
    4


*/

#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *left, *right;
};

int height(node *root)
{
    if(root == NULL)
        return 0;

    return max(height(root->left),height(root->right)) + 1;
}

int isBalanced(node *root)
{
    if(root == NULL)
        return 1;

    int left_height = height(root->left);
    int right_height = height(root->right);

    if(abs(left_height - right_height) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}

int main()
{
    node *root = new node();
    root->data = 1;

    node *temp =  new node();
    temp->data = 2;
    root->left = temp;

    node *temp2 =  new node();
    temp2->data = 3;
    (root->left)->left = temp2;

    node *temp3 =  new node();
    temp3->data = 4;
    ((root->left)->left)->left = temp3;

    node *temp4 =  new node();
    temp4->data = 5;
    root->right = temp4;

    node *temp5 =  new node();
    temp5->data = 6;
    (root->left)->right = temp5;

    if(isBalanced(root))
        cout << "Yes";
    else
        cout << "No";
}
