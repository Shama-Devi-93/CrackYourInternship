class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=1,length=1;
        ListNode* p=head;
        while(p->next!=NULL){
            p=p->next;
            length++;
        }
        ListNode* q=head;
        if(length-n==0){
            return head->next;
        }
        else{
        while(i!=length-n){
            q=q->next;
            i++;
        }
        q->next=q->next->next;
        return head;
        }

    }
};
