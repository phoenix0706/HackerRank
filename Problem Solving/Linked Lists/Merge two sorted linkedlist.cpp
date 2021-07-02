

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* &head1, SinglyLinkedListNode* &head2) {
SinglyLinkedListNode *p1=head1;
SinglyLinkedListNode *p2=head2;
SinglyLinkedListNode *dummynode=new SinglyLinkedListNode(-1);

SinglyLinkedListNode *p3=dummynode;
while(p2!=NULL && p1!=NULL){
    if(p1->data<p2->data){
        p3->next=p1;
        p1=p1->next;
        //p3=p3->next;
    }
    else{
        p3->next=p2;
        p2=p2->next;
        
    }
    p3=p3->next;
}
while(p1!=NULL){
    p3->next=p1;
    p1=p1->next;
    p3=p3->next;
}
while(p2!=NULL){
    p3->next=p2;
    p2=p2->next;
    p3=p3->next;
}
return dummynode->next;


}

