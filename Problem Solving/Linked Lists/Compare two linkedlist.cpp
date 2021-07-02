

// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
int length_1=0;
int length_2=0;
SinglyLinkedListNode* temp1=head1;
SinglyLinkedListNode* temp2=head2;
while(temp1!=NULL)
{
    length_1++;
    temp1=temp1->next;
}
while(temp2!=NULL)
{
    length_2++;
    temp2=temp2->next;
}
if(length_1!=length_2){
    return false;
}
if( length_1==length_2){
    temp1=head1;
    temp2=head2;
  while(temp2!=NULL)
{
  
    if(temp1->data!=temp2->data){
        return false;
    }
    temp1=temp1->next;
    temp2=temp2->next;
}}
return true;  
}


