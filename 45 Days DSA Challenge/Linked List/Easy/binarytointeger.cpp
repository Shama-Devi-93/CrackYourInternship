class Solution {
public:
    ListNode* reverse(ListNode *head){
        ListNode *prev=NULL;
        ListNode *curr=head;
        ListNode *temp=head;
        while(curr!=NULL){
            curr=curr->next;
            temp->next=prev;
            prev=temp;
            temp=curr;
        }
        head=prev;
        return head;
    }
    int getDecimalValue(ListNode* head) {
        int ans=0;
        ListNode *p=reverse(head);
        int i=0;
        while(p!=NULL){
            ans+=pow(2,i)*p->val;
            i++;
            p=p->next;
        }
        return ans;


    }
};
