#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
}*head;

void createList(int n)
{
    node* temp, *newnode;

    head = (node*) malloc(sizeof(node));
    cout<<"Enter number to insert at node 1 : ";
    cin>>head->data;
    head->next = NULL;

    temp = head;

    for(int i=1; i<n; i++)
    {
        newnode = (node*) malloc(sizeof(node));
        cout<<"Enter number to insert at "<<i+1<<" : ";
        cin>>newnode->data;

        newnode->next = NULL;
        temp->next = newnode;
        temp = newnode;
    }

}

void display()
{
    node *temp;
    temp = head;

    cout<<"Element of the linked list\n";

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void insertHead()
{
    node *newnode;

    newnode = (node*) malloc(sizeof(node));
    cout<<"Enter number to insert at head : ";
    scanf("%d",&newnode->data);

    newnode->next = head;
    head = newnode;
}

void insertEnd()
{
    node *newnode, *temp;
    temp = head;
    newnode = (node*) malloc(sizeof(node));
    cout<<"Enter number to insert at end : ";
    scanf("%d", &newnode->data);

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
}

void insertmid()
{

    int n;
    cout<<"Enter position you want to insert : ";
    cin>>n;

    if(n==1)
    {
        insertHead();
        return ;
    }

    node *newnode, *temp, *position;
    newnode = (node*) malloc(sizeof(node));

    cout<<"Enter the number you want to insert : ";
    cin>>newnode->data;

    temp = head;

    for(int i=1; i<n; i++)
    {
        position = temp;
        temp = temp->next;
    }
    newnode->next = temp;
    position->next = newnode;

}

void search()
{
    int num;
    cout<<"Enter the number you want to search : ";
    cin>>num;

    node *temp;
    temp = head;

    while(temp != NULL)
    {
        if(temp->data == num)
        {
            cout<<"The number is found\n";
            return ;
        }
        temp = temp->next;
    }
    cout<<"The number is not found\n";
}

void deleteHead()
{
    cout<<"Delete element from head\n";
    node *temp;
    temp = head;

    head = head->next;
    free(temp);

}

void deleteEnd()
{
    cout<<"Delete element from end\n";
    node* temp, *position;
    temp = head;
    while(temp->next != NULL)
    {
        position = temp;
        temp = temp->next;
    }
    free(temp->next);
    position->next = NULL;
}

void deleteMid()
{
    cout<<"Enter the position you want to delete : ";
    int n;
    cin>>n;

    if(n==1)
    {
        deleteHead();
        return ;
    }
    node *temp, *position;
    temp = head;

    for(int i=1; i<n; i++)
    {
        position = temp;
        temp = temp->next;
    }
    position->next = temp->next;
    free(temp);

}

void deleteNode()
{
    cout<<"Enter the number you want to delete : ";
    int num;
    cin>>num;

    if(head->data == num)
    {
        deleteHead();
        return ;
    }

    node *temp, *position;
    temp = head;
    while(temp != NULL)
    {
        position = temp;
        temp = temp->next;
        if(temp->data == num)
        {
            break;
        }

    }
    position->next = temp->next;
    free(temp);
}

int main()
{
    cout<<"Enter the size of linked list : ";

    int n;
    cin>>n;

    createList(n);
    display();

    insertHead();
    display();

    insertEnd();
    display();

    insertmid();
    display();

    deleteHead();
    display();

    deleteEnd();
    display();

    deleteMid();
    display();

    deleteNode();
    display();

    search();

    return 0;
}
