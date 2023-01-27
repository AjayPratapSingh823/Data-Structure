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
    void reverse(node* &head){
        node* prev=NULL;
        node* curr=head;
        node* forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
        }
        head=prev;
    }
    void isPalindrome(node* &head) {
        int flag=0;
        node* temp=head;
        node* ans=new node(-1);
        node* temp1=ans;
        while(temp!=NULL){
             temp1->next=temp;
             temp1=temp;
        }
        reverse(temp);
        ans=ans->next;
        while(temp!=NULL || ans!=NULL){
            if(temp->data!=ans->data){
                flag=1;
                break;
            }
        }
    if(flag==1)cout<<"NO";
    if(flag==0)cout<<"YES";
    }
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node* t=new node(10);
    node* head=t;
    insert_at_head(head,20);
    insert_at_head(head,30);
    insert_at_head(head,40);
    reverse(head);
    print(head);
    isPalindrome(head);
}