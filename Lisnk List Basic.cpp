#include<bits/stdc++.h>
using namespace std;

struct node
{
    double k;
    int* b;
    node* c;
}*head;

void CreateLinkedList()
{
    node* newnode;
    head = (node*)malloc(sizeof(node));
    head->k = 14.5;

    newnode = (node*) malloc(sizeof(node));
    newnode->k = 17.5;
    newnode->c= NULL;

    head->c = newnode;
    head->b = newnode->b;
}

void InsertEnd()
{
    node* temp, *newnode;
    temp = head;
    while(temp->c != NULL)
    {
        temp=temp->c;
    }
    newnode = (node*) malloc(sizeof(node));
    newnode->k = 20.5;
    newnode->c = NULL;
    temp->c = newnode;
    temp->b = newnode->b;
}

void display()
{
    node* temp;
    temp = head;
     while(temp!=NULL)
     {
         cout<<temp->k<<" ";
         temp=temp->c;
     }
     cout<<"\n";
}

int main()
{
    CreateLinkedList();
    InsertEnd();
    display();
    return 0;
}
