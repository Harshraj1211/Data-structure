// 12 B 64. Write a program to reversed a linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *createnode(int data)
{
    struct node *ptr = NULL;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    return ptr;
}

void display(struct node *head1){
    struct node *ptr=NULL;
    ptr=head1;
    while (ptr!=NULL){
        printf("%d -> ",ptr->data);
        ptr=ptr->link;
    }
}


struct node *reversed(struct node *head1) {
    struct node *previous = NULL;
    struct node *current = head1;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->link;     
        current->link = previous; 
        previous = current;       
        current = next;
    }
    return previous;
}

int main()
{
    struct node *head1 = createnode(1);
    head1->link = createnode(2);
    head1->link->link = createnode(3);

    struct node *rev=reversed(head1);

    display(rev);

    return 0;
}