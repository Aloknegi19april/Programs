/* level order traversal without using queue
*/

#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *left ,*right;
};

void printlevel(node *root, int level)
{
    if(root == NULL)
        return;

    if(level == 1)
    {
        cout << root->data<<" ";
        return;
    }

     printlevel(root->left, level-1);
     printlevel(root->right,level-1);
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

    int level = 3;
    printlevel(root, level);
}
