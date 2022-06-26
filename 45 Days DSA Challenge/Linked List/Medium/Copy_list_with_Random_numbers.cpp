
class Solution {
public:
    void insertAtTailNode(Node* &head, Node* &tail,int d){
        Node* newNode=new Node(d);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
    }
    Node* copyRandomList(Node* head) {
        Node* cloneHead=NULL;
        Node* cloneTail=NULL;
        Node* temp=head;
        //Step 1
        while(temp!=NULL){
            insertAtTailNode(cloneHead,cloneTail,temp->val);
            temp=temp->next;
        }
        //Step 2
        Node* originalNode=head;
        Node* cloneNode=cloneHead;
        while(originalNode!=NULL &&cloneNode!=NULL){
            Node* next=originalNode->next;
            originalNode->next=cloneNode;
            originalNode=next;

            next=cloneNode->next;
            cloneNode->next=originalNode;
            cloneNode=next;
        }
        //Step 3
        temp=head;
        while(temp!=NULL){
            if(temp->next!=NULL){
             temp->next->random=temp->random?temp->random->next:temp->random;
            }
               temp=temp->next->next;
    }

        //Step 4
        originalNode=head;
        cloneNode=cloneHead;
              while(originalNode!=NULL &&cloneNode!=NULL){
           originalNode->next=cloneNode->next;
                  originalNode=originalNode->next;
                  if(originalNode!=NULL){
                  cloneNode->next=originalNode->next;

                  }
                    cloneNode=cloneNode->next;
        }
        return cloneHead;
    }
};
