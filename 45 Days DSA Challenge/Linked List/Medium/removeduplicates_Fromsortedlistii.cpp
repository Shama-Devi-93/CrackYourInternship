class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p=new ListNode(0, head);
        ListNode *q=p;
        while(head !=NULL){
            if(head->next !=NULL && head->val== head->next->val){
            while(head->next !=NULL && head->val== head->next->val){
                head=head->next;
            }
                q->next=head->next;
        }
        else{
            q=q->next;
        }
            head=head->next;

    }
        return p->next;
    }
};
