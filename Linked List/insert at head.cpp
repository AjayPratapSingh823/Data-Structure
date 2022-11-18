#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

node(int d){
   this->data=d;
   this->next=NULL;
}
};
void insertion_at_head(node* &head,int d){
    //create new node
    node* q=new node(d);
    //link to the t node
    q->next=head;
    //make head new node
    head=q;
}
void print(node* &head){
     node * temp=head;
     while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
     }
}
int main(){
    node* t=new node(10);
    node * head=t;
    insertion_at_head(head,12);
    print(head);
}
