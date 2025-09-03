// swap kth node from beginning with kth node from end in singley linked list
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

struct node *findNodefromBeginning(struct node *head1,int k){
    struct node *ptr=head1;
    int count=0;
    while (ptr!=NULL){
        count++;
        if (count==k)
        {   
            return ptr;
        }
        ptr=ptr->link;
    }
    return NULL;
}
struct node *findNodefromEnd(struct node *head1,int k){
    struct node *ptr=head1;
    int length=0;
    while (ptr!=NULL){
        length++;
        ptr=ptr->link;
    }
    int positionFromEnd=length-k+1;
    return findNodefromBeginning(head1,positionFromEnd);
}

void swapNode(struct node *start,struct node *end){
    int temp;
    if(start!=NULL && end!=NULL){
        temp=start->data;
        start->data=end->data;
        end->data=temp;
    }
}

int main()
{
    struct node *head1 = createnode(1);
    head1->link = createnode(2);
    head1->link->link = createnode(3);
    head1->link->link->link = createnode(4);
    head1->link->link->link->link = createnode(5);
    head1->link->link->link->link->link = createnode(6);
    head1->link->link->link->link->link->link = createnode(7);

    int k=2;

    printf("Original List:\n");
    display(head1);

    struct node *start=findNodefromBeginning(head1,k);
    struct node *end=findNodefromEnd(head1,k);
    swapNode(start,end);
    
    printf("\nList after swapping %dth node from start and end (by data):\n", k);
    display(head1);

    return 0;
}