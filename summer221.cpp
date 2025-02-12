#include<bits/stdc++.h>
using namespace std;

struct node
{
    int n;
    char o[10];
    node* p;
}*head;

void CreateLinkedList()
{
    node* newnode;
    head = (node*)malloc(sizeof(node));
    head->n = 18;
    strcpy(head->o, "head");

    newnode = (node*) malloc(sizeof(node));
    newnode->n = 13;
    strcpy(newnode->o, "tail");
    newnode->p= NULL;

    head->p = newnode;

}

void display()
{
    node* temp;
    temp = head;
     while(temp!=NULL)
     {
         cout<<temp->n<<" ";
         cout<<temp->o<<"\n";
         temp=temp->p;
     }
     cout<<"\n";
}

int main()
{
    CreateLinkedList();
    //InsertEnd();
    display();
    return 0;
}
