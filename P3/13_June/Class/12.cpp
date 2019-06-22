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
    node *p1 = *head1;
    node *p2 = *head1;
    if(head1!=NULL)
    {
        while(p2!=NULL&&p2->next!=NULL)
        {
            p1=p1->next;
            p2=p2->next->next;
        }
    }
    cout << "\n"<< p1->data;
}

int main()
{
    node *head = NULL;
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    insert(&head,50);
    insert(&head,60);
    insert(&head,70);
    insert(&head,80);
    display(&head);
    middle(&head);
}
