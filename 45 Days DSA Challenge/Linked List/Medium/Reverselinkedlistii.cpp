class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(head!=NULL){
            head=head->next;
            temp->next=prev;
            prev=temp;
            temp=head;
        }
        return prev;

    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
     int start=1,end=1;
        if(left==right){
            return head;
        }
        ListNode* p=head;
        ListNode* startlist=p;
        while(start<left){
            startlist=p;
            p=p->next;
            start++;
        }
        ListNode* q=head;
        while(end<right){
            q=q->next;
                end++;
        }
        ListNode* lastlist=q->next;
        q->next=NULL;
        p=reverse(p);

        if(left==1){
            head=p;
        }
        else{
             startlist->next=p;
        }
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=lastlist;
        return head;

    }
};
