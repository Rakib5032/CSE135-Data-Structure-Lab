#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
    node* prev;
}*head;

void createLinkedList(int n)
{
    node *newnode, *temp;
    head = (node*) malloc(sizeof(node));
    scanf("%d",&head->data);
    head->next = NULL;
    head->prev = NULL;
    temp = head;

    for(int i=1; i<n; i++)
    {
        newnode = (node*) malloc(sizeof(node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        temp->next = newnode;
        newnode->prev = temp;
        temp = temp->next;
    }
}

void display()
{
    node *temp;
    temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<"\n";
}

void insertHead()
{
    node* newnode;
    newnode = (node*) malloc(sizeof(node));
    printf("Enter data to Insert At Begin : ");
    scanf("%d", &newnode->data);
    newnode->prev = NULL;
    newnode->next = head;
    head = newnode;
}

void insertEnd()
{
    node* newnode, *temp;
    temp = head;
    newnode = (node*) malloc(sizeof(node));
    printf("Enter data to Insert At End : ");
    scanf("%d", &newnode->data);

    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
    newnode->next = NULL;

}

void insertMid(int node)
{
    struct node *temp, *newnode, *position;
    temp = head;

    newnode = (node*) malloc(sizeof(node));
    printf("Enter data to insert at mid : ");
    scanf("%d",&newnode->data);

    for(int i=1; i<node; i++)
    {
        position = temp;
        temp = temp->next;
    }


    position->next = newnode;
    newnode->prev = position;
    newnode->next = temp;
    temp->prev = newnode;


}

void deleteNode(int value)
{
    node* temp, *prev;
    temp = head;

    if(head->data == value)
    {
        head = head->next;
        free(temp);
    }

    else
    {
        while(temp != NULL)
        {
            if(temp->data == value)
            {
                prev->next = temp->next;
                free(temp);
                break;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
    }


}



int main()
{
    int n;
    cin>>n;
    createLinkedList(n);
    display();
    insertHead();
    //deleteNode(x);
    display();

    insertEnd();
    int x;
    printf("Enter The position to insert",&x);
    insertMid(x);
    display();

    return 0;
}
