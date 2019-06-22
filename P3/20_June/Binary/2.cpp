/* left view
*/

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


bool printlevel(node *root, int level, bool flag)
{
    if(root == NULL)
        return false;

    if(level == 1)
    {
        cout << root->data<<" ";
        flag =  true;
        return flag;
    }
    if(!flag)
        flag = printlevel(root->left, level-1, flag);
    if(!flag)
        flag = printlevel(root->right,level-1, flag);

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


    int h = height(root);
    bool flag = false;
    for(int i = 0; i <= h; i++)
    {
        printlevel(root, i,flag);
        cout << "\n";
    }
}
