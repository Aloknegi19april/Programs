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
    cout <<"\n";
    return;
}

int findknode(node *head,int k)
{
    node *temp = head;
    while(k--)
    {
        temp=temp->next;
    }

    return temp->data;
}

void palindrome(node **head1)
{
    int begin = 0;
    int count = 0;
    node * temp = *head1;
    while(temp!=NULL)
    {
        temp = temp->next;
        count++;
    }
    int end = count-1;
     //cout<<begin<<" "<<end;
    while(begin < end)
    {  // cout<<"asdasd";
        if(findknode(*head1,begin)!=findknode(*head1,end))
        {
            cout<<"Not palindrome"<<"\n";
            return;
        }
        begin++;
        end--;
    }
    cout <<"Palindrome";
    return;
}

int main()
{
    node *head = NULL;
    insert(&head,10);
    insert(&head,20);
    insert(&head,30);
    insert(&head,40);
    insert(&head,30);
    insert(&head,30);
    insert(&head,10);
    display(&head);
    palindrome(&head);
}
