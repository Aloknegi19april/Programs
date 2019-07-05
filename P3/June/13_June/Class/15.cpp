/*
Y*/

#include<bits/stdc++.h>
using namespace std;

class node{
    public :
        int data;
        node *next;
};

////////////////////////////////////////////////
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

    node * last_node = *headptr;
    while(last_node->next!=NULL)
    {
        last_node = last_node->next;
    }
    last_node->next = temp;
    return;
}

/////////////////////////////////////////////
void display(node **headptr)
{
    node *temp = *headptr;
    while(temp!=NULL)
    {
        cout << temp -> data<<" ";
        temp=temp->next;
    }
    cout << "\n";
}


/////////////////////////////////////////////
void check_Y(node **headptr, node **headptr1)
{
    node *temp = *headptr;
    node *temp2 ;
    while(temp!=NULL)
    {
        temp2 = *headptr1;
        while(temp2!=NULL)
        {
            if(temp->data == temp2->data)
            {
                cout<<"Yes Y shape exist";
                return;
            }
            else
            {
                temp2 = temp2 -> next;
            }
        }
        temp = temp -> next;
    }
    cout<<"Y shape does not exist";
    return;
}





////////////////////////////////////////////
int main()
{
    node * head = NULL;
    node * head1 = NULL;
    int n, m;
    cin >> n;
    int Ar[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Ar[i];
        insert(&head,Ar[i]);
    }
    cin >> m;
    int Br[m];
    for(int i = 0; i < m; i++)
    {
        cin >> Br[i];
        insert(&head1,Br[i]);
    }
    display(&head);
    display(&head1);
    check_Y(&head,&head1);
}
