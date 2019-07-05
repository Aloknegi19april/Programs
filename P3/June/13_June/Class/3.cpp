/* insert after a key*/

#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data;
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

void insert_After(node **head,int pos,int value)
{
    node *temp = *head;

    while(pos--)
    {
        temp = temp-> next;
        if(temp->next==NULL&&pos>0)
        {
            cout <<"Position Not Found";
            return;
        }
    }
    node *temp2 = new node();
    temp2->data = value;
    temp2->next = temp->next;
    temp->next = temp2;

}

void display(node **head1)
{
    node *temp = *head1;
    while(temp!=NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    int a;
    node * head =  new node();
    for(int i = 0; i < n;i++)
    {
        cin >>a;
        insert(&head,a);
    }
    display(&head);
    int b = 30;
    int pos = 3;
    insert_After(&head,pos,b);
    display(&head);
}
