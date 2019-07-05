/* Insertion*/


#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data ;
    node *next;
};

void insert(node **head1, int value)
{
    node *temp = new node();
    temp->data = value;
    temp->next = NULL;

    // Case 1 : if head is NULL
    if(*head1 == NULL)
    {
        *head1 = temp;
        return;
    }

    // Case 2 : if head is not NULL
    node *last_node = *head1;
    while(last_node->next != NULL)
    {
        last_node = last_node->next;

    }
    last_node->next = temp;
    return;

}

void display(node **head1)
{
    node *temp = *head1;
    while(temp!=NULL)
    {
        cout<< temp->data<<"->";
        temp = temp->next;
    }
}

int main()
{
        node *head = NULL;
        insert(&head,10);
        insert(&head,8);
        insert(&head,20);
        insert(&head,30);
        display(&head);
}
