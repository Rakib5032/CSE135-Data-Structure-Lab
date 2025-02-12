#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* prv, *next;
}*head;

void createList(int n)
{
    node *temp, *newnode;
    head = (node*) malloc(sizeof(node));

    cout<<"Enter number at node 1 : ";
    cin>>head->data;

    head->prv = NULL;
    head->next = NULL;
    temp = head;

    for(int i=1;i<n;i++)
    {
        newnode = (node*) malloc(sizeof(node));
        cout<<"Enter number at node "<<i+1<<": ";
        cin>>newnode->data;

        temp->next = newnode;
        newnode->prv = temp;
        newnode->next = NULL;
        temp = newnode;
    }
}

void display()
{
    node *temp;
    temp = head;
    cout<<"Elements of the list \n";
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void insertHead()
{
    cout<<"Enter value to insert at head : ";
    node* newnode;

    newnode = (node*) malloc(sizeof(node));
    cin>>newnode->data;

    newnode->prv = NULL;
    newnode->next = head;
    head->prv = newnode;
    head = newnode;

}

void insertEnd()
{
    cout<<"Enter number to insert end : \n";
    node *newnode, *temp;
    temp = head;

    newnode = (node*) malloc(sizeof(node));
    cin>>newnode->data;
     while(temp->next != NULL)
     {
         temp = temp->next;
     }
     temp->next = newnode;
     newnode->prv = temp;
     newnode->next = NULL;

}

void insertMid()
{
    cout<<"Enter the position you want to insert : ";
    int n;
    cin>>n;

    node *newnode, *temp, *position;
    if(n==1)
    {
        insertHead();
        return ;
    }
    newnode = (node*) malloc(sizeof(node));
    cout<<"Enter the number you want to insert : ";
    cin>>newnode->data;
    temp = head;

    for(int i=1;i<n;i++)
    {
        position = temp;
        temp = temp->next;
    }

    temp->prv = newnode;
    position->next = newnode;
    newnode->prv = position;
    newnode->next = temp;

}

void deleteHead()
{
    cout<<"Delete from head\n";
    node* temp;

    temp=head;
    head = head->next;
    head->prv = NULL;
    free(temp);
}

void deleteEnd()
{
    cout<<"Delete from end\n";
    node* temp, *position;
    temp = head;
    while(temp->next != NULL)
    {
        position = temp;
        temp = temp->next;
    }
    position->next = NULL;
    free(temp);
}

void deleteMid()
{
    cout<<"Enter the position you want to delete :\n";
    int n;
    cin>>n;

    if(n==1)
    {
        deleteHead();
        return ;
    }

    node *temp, *position;
    temp = head;

    for(int i=1;i<n-1;i++)
    {
        position = temp;
        temp = temp->next;
    }

    position->next = temp->next;
    temp->next->prv = position;
    free(temp);

}



int main()
{
    cout<<"Enter the size of linked list :\n";
    int n;
    cin>>n;

    createList(n);
    display();

    insertHead();
    display();

    insertEnd();
    display();

    insertMid();
    display();

    deleteHead();
    display();

    deleteEnd();
    display();

    deleteMid();
    display();
    return 0;
}
