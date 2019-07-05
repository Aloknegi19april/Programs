#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next;
};

void insert(node **head1,int value)
{
    node *temp = new node();
    temp->data= value;
    temp->next=NULL;

    if(*head1==NULL)
    {
        *head1= temp;
        return;
    }
    node *last_node = *head1;
    while(last_node->next!=NULL)
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
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

void palindrome(node **head1)
{
    node *temp = *head1;
    int count = 0;
    while(temp->next!=NULL)
    {
        count++;
    }
    int middle = count/2;
    node *temp2 = *head1;
    while(middle--)
    {
        temp2 = temp2->next;
    }
    node *prev = NULL;
    node *current = *head1;
    node *right = (*head1)->next;
    while(current->next!=temp2)
    {
        right = current->next;
        current->next = prev;
        prev = current;
        current = right;
    }
    *head1 = prev;
}

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        insert(&head,Ar[i]);
    }
    display(&head);
    palindrome(&head);
    display(&head);
}
