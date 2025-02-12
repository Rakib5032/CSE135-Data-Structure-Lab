#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node* next;
}*head;


node* create()
{
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    return newnode;
}


void display()
{
    node* temp;
    temp = head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"\n";
}

void push()
{
    cout<<"Enter Number to Push : ";
    node * newnode = create();
    scanf("%d",&newnode->data);

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
    node * temp;
    temp = head;
    head = head->next;
    free(temp);
}

void top()
{
    cout<<"Head : "<<head->data<<"\n";
}

int main()
{
    int n;

    int ch;
    while(ch != 4)
    {
        cout<<"Enter choice : \n";
        cin>>ch;
        switch(ch)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            break;

        default:
            cout<<"Enter between 1 to 4\n";
        }
    }

    top();

    return 0;
}
