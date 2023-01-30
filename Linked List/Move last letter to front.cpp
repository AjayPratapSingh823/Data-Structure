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
void insert_at_beg(node* &head,int d){
    node * q=new node(d);
    q->next=head;
    head=q;
}
void remove(node*&head){
    node*temp=head;
    node*prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    insert_at_beg(head,temp->data);
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
node* t=new node(10);
node* head=t;
insert_at_beg(head,20);
insert_at_beg(head,30);
insert_at_beg(head,40);
insert_at_beg(head,50);
remove(head);
print(head);
return 0;
}