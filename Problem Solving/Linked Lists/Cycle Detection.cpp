

// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool has_cycle(SinglyLinkedListNode* head) {
SinglyLinkedListNode *slow=head;
SinglyLinkedListNode *fast=head;
while(fast!=NULL && slow!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow){
        return true; //cycle is present
    }
}
return false;
}

