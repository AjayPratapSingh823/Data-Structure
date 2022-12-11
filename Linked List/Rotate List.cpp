class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL||k==0) return head;
        ListNode*temp=head;
        int size=1;
        while(temp->next!=NULL){
            size++;
            temp=temp->next;
        }
         k = k%size;
        temp->next=head;//connect last node to the head(create loop)
        for(int i=0;i<size-k;i++)
            temp=temp->next;
        ListNode*first=temp->next;
        temp->next=NULL;
        return first;
    }
};
