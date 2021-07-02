

/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
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

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
 SinglyLinkedListNode* prev=NULL;
 SinglyLinkedListNode* curr=llist;
 SinglyLinkedListNode* nextptr;
 while(curr!=NULL){
     nextptr=curr->next;
     curr->next=prev;
     prev=curr;
     curr=nextptr;
 }
 return prev;
}

