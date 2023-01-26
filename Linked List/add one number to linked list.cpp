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
void insert_at_head(node* &head,int d){
    node* q=new node(d);
    q->next=head;
    head=q;
}
node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* fur=NULL;
    while(curr!=NULL){
        fur=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fur;
    }
    return  prev;
}
node* addone(node* &head){
    head=reverse(head);
    bool f=true;
    node* curr=head;
   while(curr!=NULL and f==true){
    if(curr->next==NULL && curr->data==9){
        curr->data=1;
        node*temp=new node(0);
        temp->next=head;
        head=temp;
        curr=curr->next;
    }
   else if(curr->data==9){
        curr->data=0;
        curr=curr->next;
    }
    else{
        curr->data=curr->data+1;
        curr=curr->next;
        f=false;
    }
   }
   head=reverse(head);
    return head;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }
}
int main(){
 node* t=new node(9);
 node* head=t;
 insert_at_head(head,9);
 insert_at_head(head,8);
 addone(head);
 print(head);
 return 0;
}