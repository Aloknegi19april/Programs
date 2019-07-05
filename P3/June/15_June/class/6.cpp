#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node * next;
};

void insert(node **ptr, int value)
{
    node *temp = new node();
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
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout <<"\n";
    return;
}

node * reverse(node *head, int k)
{
    stack <node *> s;
    node *temp = head;
    while(temp->next!=NULL)
    {
        s.push(temp);
        temp = temp->next;
    }
    head = temp;
    s.push(temp);
    while(k--)
    {
        cout << s.top()->data<<" ";
        temp->next = s.top();

        s.pop();
        temp = temp->next;
        temp->next = NULL;
    }
    return head;
}

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    int Ar[n];
    for(int  i = 0; i < n; i++)
    {
        cin>>Ar[i];
        insert(&head,Ar[i]);
    }
    int k;
    cin >> k;
    display(&head);
    head=reverse(head,k);


}
