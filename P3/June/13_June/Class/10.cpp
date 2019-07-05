/*
Reverse*/

#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data;
    node * next;
};

void insert(node **head1, int value)
{
    node *temp = new node();
    temp -> data = value;
    temp ->next = *head1;
    *head1 = temp;
    return;
}

void display(node **head1)
{
    node *temp = *head1;
    while(temp!=NULL)
    {
        cout << temp->data <<" ";
        temp= temp ->next;
    }
}


 void reverse(node **head1)
{
    node *prev = NULL;
    node *current = *head1;
    node *right = (*head1)->next;

    while(current!=NULL)
    {
        right = current->next;
        current-> next = prev;
        prev = current;
        current = right;

    }
    *head1 = prev;
}
int main()
{
    node *head = NULL;
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    display(&head);
    reverse(&head);
    display(&head);
}
