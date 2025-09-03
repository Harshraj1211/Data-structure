// 12 A 63. Write a program to copy a linked list.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *createnode(int data)
{
    struct node *ptr = NULL;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    return ptr;
}
struct node *copy(struct node *head1){
    struct node *ptr=NULL;
    ptr=head1;
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    newNode->data=head1->data;
    newNode->link=NULL;
    struct node *begining=newNode;
    struct node *current=head1->link;
    struct node *previous=newNode;
    while(current->link!=NULL){
        struct node *temp=(struct node *)malloc(sizeof(struct node));
        temp->data=current->data;
        temp->link=NULL;
        previous->link=temp;
        previous=temp;
        current=current->link;
    }
    return begining;
};
void display(struct node *head1){
    struct node *ptr=NULL;
    ptr=head1;
    while (ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }
}
int main()
{
    head1 = createnode(1);
    head1->link = createnode(2);
    head1->link->link = createnode(3);
    head1->link->link->link = createnode(4);
    head1->link->link->link->link = createnode(5);
    head1->link->link->link->link->link = createnode(6);
    head1->link->link->link->link->link->link = createnode(7);
    copy(head1);
    printf("After copying Head 1 : ");
    display(head1);
    return 0;
}