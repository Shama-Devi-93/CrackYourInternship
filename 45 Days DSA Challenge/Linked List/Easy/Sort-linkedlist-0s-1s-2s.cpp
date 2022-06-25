class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int count1=0,count0=0,count2=0;
        Node* p=head;
        while(p!=NULL){
            if(p->data==0){
                count0++;
            }
            else if(p->data==1){
                count1++;
            }
            else{
                count2++;
            }
            p=p->next;
        }
        Node* q=head;
        while(count0--){
            q->data=0;
            q=q->next;
        }
        while(count1--){
            q->data=1;
            q=q->next;
        }
        while(count2--){
            q->data=2;
            q=q->next;
        }
        return head;

    }
};
