class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return NULL;
        }
        while(head->val==val && head->next!=NULL){
            head=head->next;
        }
        if(head->val==val && head->next==NULL){
            return NULL;
        }
        ListNode* p=head;
        ListNode* q=head->next;
        while(p!=NULL && q!=NULL){
            if(q->val==val){
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
