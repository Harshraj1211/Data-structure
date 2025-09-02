// delete duplicate node 
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
        printf(" -> %d",ptr->data);
        ptr=ptr->link;
    }
}

struct node *deleteDuplicate(struct node *head1){
    struct node *current;
    struct node *previous;
    struct node *temp;
    for(current=head1 ; current!=NULL ; current=current->link){
        previous=current;
        temp=current->link;
        while(temp!=NULL){
            if (current->data==temp->data){
                previous->link=temp->link;
                free(temp);
                temp=previous->link;
            }
            else{
                previous=temp;
                temp=temp->link;
            }
        }
    }
    return head1;
}

int main()
{
    struct node *head1 = createnode(1);
    head1->link = createnode(2);
    head1->link->link = createnode(3);
    head1->link->link->link = createnode(1);
    head1->link->link->link->link = createnode(5);
    head1->link->link->link->link->link = createnode(6);
    head1->link->link->link->link->link->link = createnode(7);

    int k=2;

    printf("Original List:\n");
    display(head1);

    deleteDuplicate(head1);
    
    printf("\nList after swapping :\n");
    display(head1);

    return 0;
}