// swap 2 consecutive node till the end
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;
struct node *createNode(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;
    return ptr;
}

void display(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf(" -> %d\n", ptr->data);
        ptr = ptr->link;
    }
}

struct node* swapPairs(struct node* head) {
    // if(head==NULL || head->link==NULL){
    //     return head;
    // }
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    struct node *ptr1=head;
    struct node *ptr2=newNode;
    while(ptr1!=NULL && ptr1->link!=NULL){
        ptr2->link=ptr1->link;
        ptr1->link=ptr2->link->link;
        ptr2->link->link=ptr1;

        ptr2=ptr1;
        ptr1=ptr1->link;
    }
    return newNode->link;
}

int main()
{

    struct node *head = createNode(1);
    head->link = createNode(2);
    head->link->link = createNode(3);
    head->link->link->link = createNode(4);
    head->link->link->link->link = createNode(5);
    head->link->link->link->link->link = createNode(6);
    head->link->link->link->link->link->link = createNode(7);
    head->link->link->link->link->link->link->link = createNode(8);

    printf("\nBefore : \n");
    display(head);

    head=swapPairs(head);

    printf("\nAfter : \n");
    display(head);

    return 0;
}
