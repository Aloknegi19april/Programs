/*
Delete Node from middle*/

#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data;
    node * next;
};

void insert(node **head1, int value)
{
    node * temp = new node();
    temp -> data = value;
    temp -> next = NULL;

    if(*head1==NULL)
    {
        *head1 = temp;
        return;
    }

    node *last_node = *head1;
    while(last_node->next!=NULL)
        last_node=last_node->next;

    last_node->next = temp;
    return;
}

void display(node *head1)
{
    node *temp = head1;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp-> next;
    }
    cout <<"\n";
}

void delete_key(node **head1, int key)
{
    node * temp = *head1;
    while((temp->next)->data!=key)
        temp = temp->next;

    temp->next = temp->next->next;
    return;
}

int main()
{
    node *head = NULL;
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    display(head);
    int key = 30;
    delete_key(&head,key);
    display(head);
}
