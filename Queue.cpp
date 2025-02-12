#include<bits/stdc++.h>
using namespace std;

int front = -1, rear = -1;

void enqueue(int queuee[], int n)
{
    rear++;
    if(rear >= n)
    {
        cout<<"Queue is full\n";
        rear--;
    }

    else
    {
        if(front == -1)
            front++;
        cout<<"Enter value to insert :";
        cin>>queuee[rear];
        queuee[rear];
    }
}

void dequee(int queuee[])
{
    if(front == -1)
        cout<<"Queue is empty\n";
    else if(front<=rear)
    {
        cout<<"Deleted Value = "<<queuee[front]<<"\n";;
        front++;
    }
    else
    {
        cout<<"Queue is empty\n";
        front = - 1;
        rear = -1;
    }

}

void display(int queuee[])
{
    cout<<"Print queue :\n";
    for(int i=front;i<=rear && i!=-1;i++)
        cout<<queuee[i]<<" ";
    cout<<"\n";

}

int main()
{
    int n;
    cout<<"Enrer the size of Queue :\n";
    cin>>n;
    int queuee[n];

    cout<<"Enter 1 to Enque :\n";
    cout<<"Enter 2 to Dequeue :\n";
    cout<<"Enter 3 to display :\n";
    cout<<"Enter 4 to exit\n";

    int choice=0;

    while(choice != 4)
    {
        cout<<"Enter your choice :\n";
        cin>>choice;

        switch(choice)
        {
        case 1:
            enqueue(queuee, n);
            break;

        case 2:
            dequee(queuee);
            break;
        case 3:
            display(queuee);
            break;
        case 4:
            break;
        default:
            cout<<"Enter right choice\n";
        }
    }

    return 0;
}
