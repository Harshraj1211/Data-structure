// 71. Write a program to perform addition of two polynomial equations using
// appropriate data structure.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *head1 = NULL;
struct node *head2 = NULL;
struct node *head3 = NULL;
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
        printf(" -> %d", ptr->data);
        ptr = ptr->link;
    }
}
int sum(int data1, int data2){
    return data1 + data2;
}
struct node *sumNode(struct node *head1, struct node *head2){

        struct node *ptr1 = head1;
        struct node *ptr2 = head2;
        struct node *ptr3 = NULL;
        struct node *head3 = NULL;

        while (ptr1 != NULL && ptr2 != NULL){
            struct node *newNode = (struct node *)malloc(sizeof(struct node));
            newNode->data = sum(ptr1->data, ptr2->data);
            newNode->link = NULL;

            if (head3 == NULL){
                head3 = newNode;
                ptr3 = head3;
            }
            else{
                ptr3->link = newNode;
                ptr3 = newNode;
            }
            ptr1 = ptr1->link;
            ptr2 = ptr2->link;
        }
        if(ptr1!=NULL){
            ptr3->link=ptr1;
        }
        if(ptr2!=NULL){
            ptr3->link=ptr2;
        }
        return head3;   
}
int main()
{

    head1 = createNode(1);
    head1->link = createNode(5);
    head1->link->link = createNode(7);
    head1->link->link->link = createNode(2);

    head2 = createNode(5);
    head2->link = createNode(2);
    head2->link->link = createNode(3);

    display(sumNode(head1, head2));

    return 0;
}