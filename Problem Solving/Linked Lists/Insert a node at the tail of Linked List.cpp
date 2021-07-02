

// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
SinglyLinkedListNode* temp=head;
SinglyLinkedListNode* newnode=new SinglyLinkedListNode(data);
if(head==NULL){
   
   newnode->next=NULL;
   newnode->data=data;
   head=newnode; 

}
else{
while(temp->next!=NULL){
    temp=temp->next;
}
newnode->data=data;
newnode->next=NULL;

temp->next=newnode;}
return head;
}


