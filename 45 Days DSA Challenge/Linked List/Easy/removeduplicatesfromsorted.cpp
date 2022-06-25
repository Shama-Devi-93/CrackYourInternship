class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return NULL;
        }
        ListNode* p=head;
        ListNode* q=head->next;
        while(p!=NULL && q!=NULL){
            if(p->val==q->val){
                p->next=q->next;
                q=q->next;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }
        return head;
    }
};
