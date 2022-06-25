class Solution {
public:
    ListNode* middleNode(ListNode* head) {
    int len=0,mid;
        ListNode *p=head;
        while(p!=NULL){
            p=p->next;
            len++;
        }
       ListNode *q=head;
        mid=(len/2)+1;
        int i=1;
        while(i!=mid){
            q=q->next;
            i++;
        }
        return q;
    }
};
