

// Complete the insertNodeAtHead function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode* temp=new SinglyLinkedListNode(data);
    temp->data=data;
    if(llist==NULL){
        llist=temp;
        temp->next=NULL;
    }
    else{
        temp->next=llist;
        llist=temp;
    }
    return llist;


}

