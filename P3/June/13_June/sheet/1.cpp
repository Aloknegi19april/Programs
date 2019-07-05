#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data;
    node *next;
};

void insert(node **headptr, int value)
{
    node *temp = new node();
    temp->data = value;
    temp->next = NULL;

    if(*headptr == NULL)
    {
        *headptr = temp;
        return;
    }

    node *last_node = *headptr;
    while(last_node->next!=NULL)
    {
        last_node = last_node->next;
    }
    last_node->next = temp;
    return;
}

void display(node **headptr)
{
    node *temp = *headptr;
    while (temp!=NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout <<"\n";
}


void great(node **headptr, node **headptr1)
{
    node *temp = *headptr;
    node *temp2 = *headptr1;
    node *head3 = NULL;
    while(temp!=NULL)
    {
        if(temp->data>temp2->data)
        {
            insert(&head3,temp->data);
        }
        else
        {
            insert(&head3,temp2->data);
        }

        temp = temp->next;
        temp2 = temp2->next;
    }
    display(&head3);


}

int main()
{
    node *head = NULL;
    node *head1 = NULL;
    int n;
    cin >> n;
    int Ar[n],Br[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        insert(&head,Ar[i]);
    }
    for(int i = 0; i < n; i++)
    {
        cin >> Br[i];
        insert(&head1,Br[i]);
    }
    display(&head);
    display(&head1);
    great(&head,&head1);
}
