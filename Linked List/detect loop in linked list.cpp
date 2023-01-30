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
bool detectloop(node* &head){
    if(head==NULL){
        return false;
    }
    map<node*,bool>visited;
    node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
}
// floyd detection loop
bool detectloop(node* &head){
    node*start=head;
    node*fast=head;
    if(head==NULL){
        return false;
    }
    while(start!=NULL && fast!=NULL){
         fast=fast->next;
         if(fast->next!=NULL){
            fast=fast->next;
         }
         start=start->next;
         if(start=fast)
         return 1;
    }
    return false;
}
int main(){
    node*t=new node(10);
    node* head=t;
    insertion_at_head(head,12);
    insertion_at_head(head,13);
    insertion_at_head(head,14);
    insertion_at_head(head,15);
    if(!detectloop(head))
    cout<<"Cycle is not prsent";

}