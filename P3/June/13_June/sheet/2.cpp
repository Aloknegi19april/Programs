#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * next;
};

void insert(node **ptr, int value)
{
    node * temp = new node();
    temp->data = value;
    temp->next = NULL;

    if(*ptr == NULL)
    {
        *ptr = temp;
        return;
    }
    node *last = *ptr;

    while(last->next!=NULL)
    {
        last = last->next;
    }
    last->next = temp;
    return;
}


void display(node **ptr)
{
    node *temp = *ptr;
    while(temp!=NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void sum(node **ptr)
{
    node *temp = *ptr;
    int sum = 0;
    while(temp->next!=NULL)
    {
        if(temp->data > (temp->next)->data)
        {
            sum+=temp->data;
        }
        temp= temp->next;
    }
    node *a = *ptr;
    if(temp->data > a->data)
    {
        sum+=temp->data;
    }
    cout<<sum<<"\n";
}

int main()
{
    node *head = NULL;
    int n;
    cin>> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        insert(&head,Ar[i]);
    }
    display(&head);
    sum(&head);
}
