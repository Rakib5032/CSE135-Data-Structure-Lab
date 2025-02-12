#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
}*head;

void createLinkedList(int n)
{
    node *newnode, *temp;
    head = (node*) malloc(sizeof(node));
    scanf("%d",&head->data);
    head->next = NULL;
    temp = head;

    for(int i=1; i<n; i++)
    {
        newnode = (node*) malloc(sizeof(node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        temp->next = newnode;
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
    int x;
    cin>>x;
    deleteNode(x);
    display();

    return 0;
}
