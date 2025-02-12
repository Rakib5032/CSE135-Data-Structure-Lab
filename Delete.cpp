#include<bits/stdc++.h>
using namespace std;

struct node{
int data;
node *next;
} *head;
void creatList(int n){
    node *temp,*newnode;
    head = (struct node*) malloc(sizeof(struct node));
    cout << "enter value 1: ";
    cin >> head->data;
    head->next = NULL;
    temp = head;
    for(int i = 2 ; i <=n ; i++){
        newnode = (struct node*) malloc(sizeof(struct node));
        cout<< "enter value "<<i<<": ";
        cin >> newnode->data;
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
    }
}
void display(){
    node *temp;
    temp = head;
    while(temp != NULL){
        cout << temp->data<<" ";
        temp = temp->next;
    }
}
void display_N_node(int k,int n){
    node *temp;
    int i = n-k;
    int j = 1;
    temp = head;
    while(j<=i){
        temp=temp->next;
        j++;
    }
    while(temp!=NULL){
        cout<< temp->data <<" ";
        temp = temp->next;
    }

}
int main(){
    cout<<"enter the size of node: "<<endl;
    int n;cin >> n;
    creatList(n);
    // display();
    cout<< "enter n no node ,you want to delet from end : ";
    int k ; cin >> k;
    display_N_node(k,n);

return 0;
}
