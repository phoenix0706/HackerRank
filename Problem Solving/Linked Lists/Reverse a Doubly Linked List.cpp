

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */

DoublyLinkedListNode* reverse(DoublyLinkedListNode* &llist) {
DoublyLinkedListNode* curr=llist;
if(curr==NULL){
    return curr;
}
DoublyLinkedListNode * temp;
while(curr!=NULL){
    temp=curr->prev;
  
    curr->prev=curr->next;
    curr->next=temp;
    curr=curr->prev;
}
if(temp!=NULL){
    llist=temp->prev;
}
return llist;
}

