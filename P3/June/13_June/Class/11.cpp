/*
Middle of a linked list
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

void middle(node **head1)
{
    int count = 0;
    node * temp = *head1;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    temp = *head1;
    int i = 0;
    while(i!=count/2)
    {
        temp = temp->next;
        i++;
    }
    cout << "\n"<<temp->data;
}

int main()
{
    node *head = NULL;
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    display(&head);
    middle(&head);
}
