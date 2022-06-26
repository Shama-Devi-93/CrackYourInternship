class Solution {
public:
    void FindMiddle(ListNode* cur, ListNode** first,ListNode** second){
        ListNode* fast;
        ListNode* slow;
        slow=cur;
        fast=cur->next;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        *first=cur;
        *second=slow->next;
        slow->next=NULL;
    }
    ListNode* MergeBoth(ListNode* first, ListNode* second){
        ListNode* answer=NULL;
        if(!first){
            return second;
        }
        else if(!second){
            return first;
        }
        if(first->val<=second->val){
            answer=first;
            answer->next=MergeBoth(first->next,second);
        }
        else{
            answer=second;
            answer->next=MergeBoth(first,second->next);
        }
        return answer;
    }
    void MergeSorting(ListNode** head){
        ListNode* cur=*head;
        ListNode* first;
        ListNode* second;
        if(!cur || !cur->next) return ;
        FindMiddle(cur,&first,&second);
        MergeSorting(&first);
        MergeSorting(&second);
        *head=MergeBoth(first,second);

    }
    ListNode* sortList(ListNode* head) {
        MergeSorting(&head);
        return head;
    }
};
