#include<bits/stdc++.h>
using namespace std;

class node{
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

    node * last = *ptr;
    while(last->next!=NULL)
    {
        last = last->next;
    }
    last->next = temp;
    return;
}

void display(node *ptr)
{
    node *temp = ptr;
    while(temp!=NULL)
    {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
    return;
}

void median(node *ptr)
{
    node *temp = ptr;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp = temp->next;
    }

    int i = 0;

    temp = ptr;
    while(i!=count/2)
    {
        temp=temp->next;
        i++;
    }
    cout << temp->data;
    return;
}

int main()
{
    node * head = NULL;
    int n;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        insert(&head, Ar[i]);
    }
    display(head);
    median(head);
}
