

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
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

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
SinglyLinkedListNode* p;
SinglyLinkedListNode* q;
q=llist;
SinglyLinkedListNode* newnode= new SinglyLinkedListNode(data);
int x=0;
while(q!=NULL && x!=position ){
p=q;
q=q->next; 
x++;   
} 
newnode->data=data;
p->next=newnode;
newnode->next=q;
return llist;
}

