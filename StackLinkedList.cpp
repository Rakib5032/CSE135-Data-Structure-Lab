#include<bits/stdc++.h>
using namespace std;
int sz =0;

struct node
{
    int data;
    node *next;
}*head;

node* createnode()
{
    sz++;
    node *newnode;
    newnode = (node*) malloc(sizeof(node));
    newnode->next = NULL;
    return newnode;
}

void push()
{
    cout<<"Enter value : ";
    node* newnode = createnode();
    cin>>newnode->data;

    if(head == NULL)
    {
        head = newnode;
        return ;
    }
    newnode->next = head;
    head = newnode;
}

void pop()
{
    if(sz==0)
    {
        cout<<"Stack is empty\n";
        return ;
    }
    node* temp;
    temp = head;

    head = head->next;
    free(temp);
    sz--;
}

void display()
{
    node* temp;
    temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}


int main()
{
    int choice=0;
    while(choice != 4)
    {
        cout<<"Enter the choice : ";
        cin>>choice;

        switch(choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
            break;
        default:
            cout<<"Enter right choice\n";
        }
    }
}
