#include<bits/stdc++.h>
using namespace std;

int stackk[10], top =-1, choice =0, n ;

void push()
{
    int value;
    cout<<n<<"\n";
    if(top == n)
        cout<<"Overflow\n";
    else
    {
        top++;
        cout<<"Enter value : ";
        cin>>value;
        stackk[top] = value;
    }
}

void pop()
{
    if(top == -1)
        cout<<"Underflow\n";
    else
    {
        top--;
        cout<<"Value deleted\n";
    }
}

void display()
{
    cout<<"Output : ";
    for(int i=top; i>=0; i--)
        cout<<stackk[i]<<" ";
    cout<<"\n";
}



int main()
{
    cout<<"Enter the size of stack : ";
    cin>>n;
    while(choice != 4)
    {
        cout<<"Enter your choice : ";
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
        {
            break;
        }
        default:
            cout<<"Enter right choice :\n";

        }

    }
    return 0;
}
