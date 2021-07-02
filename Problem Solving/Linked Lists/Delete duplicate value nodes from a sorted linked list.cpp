

/*
 * Complete the 'removeDuplicates' function below.
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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode *temp=llist;
    int value=0;
    SinglyLinkedListNode *nextt;
    SinglyLinkedListNode *ptr;
    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            nextt=temp->next->next;
           // ptr=temp;
           free(temp->next);
            temp->next=nextt;
            
        }
        else{
            temp=temp->next;
        }
    }
        return llist;
    }



