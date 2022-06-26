class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr=new ListNode(0);
        ListNode* result=curr;
       int sum=0;
        while(l1!=NULL || l2!=NULL){
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2){
                sum+=l2->val;
                l2=l2->next;
            }
            curr->next=new ListNode(sum%10);
            curr=curr->next;
            sum=sum>9?1:0;

        }
        if(sum){
            curr->next=new ListNode(sum);
        }
        return result->next;
    }
};
