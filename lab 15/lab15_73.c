// 73. WAP to delete alternate nodes of a doubly linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
    struct node *previous;
};

void displayForward(struct node *head1){
    printf("\nDisplay Forward (Using link node) : \n");
    struct node *ptr=head1;
    while (ptr!=NULL){
        printf("-> %d",ptr->data);
        ptr=ptr->link;
    }
}

void displayBackward(struct node *head7){
    printf("\nDisplay Backward (Using Previous Node) : \n");
    struct node *ptr=head7;
    while (ptr!=NULL){
        printf("-> %d",ptr->data);
        ptr=ptr->previous;
    }
}
struct node* removeAlternate(struct node* head1) {
    struct node* ptr = head1;
    while (ptr != NULL && ptr->link != NULL) {
        ptr->link = ptr->link->link;
        if (ptr->link != NULL) {
            ptr->link->previous = ptr;
        }
        ptr = ptr->link;
    }
    return head1;
}

int main(){
    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    head1->data = 1;
    head1->link = NULL;
    head1->previous = NULL;

    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    head2->data = 5;
    head2->link = NULL;
    head2->previous = head1;
    head1->link = head2;

    struct node *head3 = (struct node *)malloc(sizeof(struct node));
    head3->data = 3;
    head3->link = NULL;
    head3->previous = head2;
    head2->link = head3;

    struct node *head4 = (struct node *)malloc(sizeof(struct node));
    head4->data = 11;
    head4->link = NULL;
    head4->previous = head3;
    head3->link = head4;

    struct node *head5 = (struct node *)malloc(sizeof(struct node));
    head5->data = 10;
    head5->link = NULL;
    head5->previous = head4;
    head4->link = head5;

    struct node *head6 = (struct node *)malloc(sizeof(struct node));
    head6->data = 12;
    head6->link = NULL;
    head6->previous = head5;
    head5->link = head6;

    struct node *head7 = (struct node *)malloc(sizeof(struct node));
    head7->data = 15;
    head7->link = NULL;
    head7->previous = head6;
    head6->link = head7;

    head1=removeAlternate(head1);

    displayForward(head1);
    displayBackward(head7);

    return 0;
}