#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
int length1=0,length2=0;
SinglyLinkedListNode *temp1=head1;
SinglyLinkedListNode *temp2=head2;
while(temp1!=NULL){
    length1++;
    temp1=temp1->next;
}
while(temp2!=NULL){
    length2++;
    temp2=temp2->next;
}
SinglyLinkedListNode *ptr1;
SinglyLinkedListNode *ptr2;
int d=0;
if(length1>length2){
    d=length1-length2;
    ptr1=head1;
    ptr2=head2;
    
}
else{
    d=length2-length1;
    ptr1=head2;
    ptr2=head1;
}
while(d){
    ptr1=ptr1->next;
    if(ptr1==NULL){
        return -1;
    }
    d--;
}
while(ptr1!=NULL && ptr2!=NULL){
    if(ptr1==ptr2){
        return ptr1->data;
    }
    ptr1=ptr1->next;
    ptr2=ptr2->next;
}
return -1;

}

int main()