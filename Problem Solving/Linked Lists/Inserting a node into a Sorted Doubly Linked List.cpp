

/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
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

DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data) {
DoublyLinkedListNode *temp=llist;
DoublyLinkedListNode *newnode=new DoublyLinkedListNode(data);
if(temp==NULL){
    llist=newnode;
    return llist;
}
if(temp->data>newnode->data){
    newnode->next=llist;
    llist=newnode;
    return llist;
}
while(temp->next!=NULL && temp->next->data<newnode->data){
    temp=temp->next;
    
}
newnode->next=temp->next;
if(temp->next!=NULL){
    newnode->next->prev=newnode;
}
newnode->prev=temp;
temp->next=newnode;
return llist;
}

