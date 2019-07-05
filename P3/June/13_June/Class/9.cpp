/*
create a linked list from an  array in n time
*/

#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * next;
};

void insert(node **head1, int value)
{
     node *temp = new node();
     temp -> data = value;
     temp -> next = *head1;
     *head1 = temp;
     return;

}

void display(node **head1)
{
    node *temp = *head1;
    while(temp!=NULL)
    {
        cout << temp -> data<<" ";
        temp = temp->next;
    }
    return;
}

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    int Array[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Array[i];
    }

    for(int i = n-1; i >= 0; i--)
    {
        insert(&head,Array[i]);
    }
    display(&head);
}
