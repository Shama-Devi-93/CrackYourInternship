class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* first=new ListNode(0);
        ListNode* second=new ListNode(0);
        ListNode* fir=first;
        ListNode* sec=second;
        while(head!=NULL){
            if(head->val<x){
                fir->next=head;
                fir=fir->next;
            }
            else{
                sec->next=head;
                sec=sec->next;
            }
            head=head->next;
        }
        fir->next=second->next;
        sec->next=NULL;
        return first->next;
    }
};
