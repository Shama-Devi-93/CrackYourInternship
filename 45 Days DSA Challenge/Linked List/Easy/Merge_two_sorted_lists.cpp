class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* curr=new ListNode();
        ListNode* l3=curr;
        while(l1!=nullptr && l2!=nullptr){
            if(l1->val<l2->val){
                l3->next=l1;
                l1=l1->next;
                l3=l3->next;
            }
            else{
                l3->next=l2;
                l2=l2->next;
                l3=l3->next;
            }
        }
        while(l1!=nullptr){
                l3->next=l1;
                l1=l1->next;
            l3=l3->next;
        }
        while(l2!=nullptr){
                l3->next=l2;
                l2=l2->next;
            l3=l3->next;
        }
        return curr->next;
    }

};
