class Solution {
public:
    bool hasCycle(ListNode *head) {
     if(head==NULL){
         return false;
     }
        ListNode* p=head;
        ListNode *q=head->next;
        while(p!=q ){
            if(q==NULL || q->next==NULL){
                return false;
            }
            p=p->next;
            q=q->next->next;
        }
        return true;
    }

};
