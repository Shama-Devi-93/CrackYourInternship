class Solution {
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
		int len1=0,len2=0,diff=0;
        ListNode* p=headA;
        ListNode* q=headB;
        while(p!=NULL){
            p=p->next;
            len1++;
        }
        while(q!=NULL){
            q=q->next;
            len2++;
        }

        if(len1>len2){
            diff=len1-len2;
            p=headA;
            q=headB;
        }
        else{
            diff=len2-len1;
            p=headB;
            q=headA;
        }
        while(diff--){
            p=p->next;
        }
        while(p!=q){
            p=p->next;
            q=q->next;
        }
        return p;
    }
};
