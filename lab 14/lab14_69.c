// 69. Write a menu driven program to implement following operations on the circular 
// linked list. 
// • Insert a node at the end of the linked list. 

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void display(struct node *head){
    struct node *ptr = head;
    do {
        printf(" -> %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct node *insertAtHead(struct node *head1,int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head1;
    
    if (head1 == NULL) {
        ptr->next = ptr;
        return ptr;
    }
    
    struct node *temp = head1;
    while (temp->next != head1) {
        temp = temp->next;
    }
    temp->next = ptr;
    
    return ptr;
}
struct node *removeNode(struct node *head1, int k) {
    if (head1 == NULL) return NULL;

    struct node *curr = head1, *prev = NULL;
    int count = 0;

    curr = head1;
    while (count < k && curr->next != head1) {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (count == k) {
        prev->next = curr->next;
        free(curr);
    }
    return head1;
}
int main(){
    
    struct node *head1=(struct node *)malloc(sizeof(struct node));
    head1->data=7;
    head1->next=NULL;
    
    struct node *head2=(struct node *)malloc(sizeof(struct node));
    head2->data=8;
    head2->next=NULL;
    head1->next=head2;
    
    struct node *head3=(struct node *)malloc(sizeof(struct node));
    head3->data=1;
    head3->next=NULL;
    head2->next=head3;
    
    struct node *head4=(struct node *)malloc(sizeof(struct node));
    head4->data=2;
    head4->next=NULL;
    head3->next=head4;
    
    struct node *head5=(struct node *)malloc(sizeof(struct node));
    head5->data=4;
    head5->next=NULL;
    head4->next=head5;
    head5->next=head1;
    
    
    // • Insert a node at the front of the linked list. 
    head1 = insertAtHead(head1,130);
    
    // • Display all nodes.
    display(head1);

    // • Delete a node from specified position. 
    removeNode(head1,3);    
    printf("\nAfter removing a node : \n");
    display(head1);

    return 0;
}