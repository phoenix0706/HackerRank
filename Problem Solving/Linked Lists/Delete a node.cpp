

/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
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

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
SinglyLinkedListNode* p;
SinglyLinkedListNode* q;
if(llist->next==NULL){
    llist=NULL;
    return llist;
}
if(position ==0){
    llist=llist->next;
    return llist;
}
p=llist;
int x=0;
while(p!=NULL && x!=position-1){

    p=p->next;
    x++;
}
q=p->next;
p->next=p->next->next;
delete(q);
return llist;
}

