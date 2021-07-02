

/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
SinglyLinkedListNode* temp=llist;
int length=0;
if(llist==NULL){
    return 0;
    
}

while(temp!=NULL){
    length++;
    
    temp=temp->next;
}
//cout<<length<<" ";
int x=length-(positionFromTail+1);
temp=llist;
for(int i=0;i<x;i++){
    temp=temp->next;
    
}
return temp->data;
}

