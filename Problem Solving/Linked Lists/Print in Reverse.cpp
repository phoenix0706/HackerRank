

/*
 * Complete the 'reversePrint' function below.
 *
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

void reversePrint(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* prev=NULL;
    SinglyLinkedListNode* curr=llist;
    SinglyLinkedListNode* nextptr;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
while(prev!=NULL){
    cout<<prev->data<<endl;
    prev=prev->next;
}
}

