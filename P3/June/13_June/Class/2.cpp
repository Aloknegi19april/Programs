/*insert in front */

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

int main()
{
    node *head=NULL;
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        insert(&head,Ar[i]);
    }
    display(&head);
}
