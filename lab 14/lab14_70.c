// B 70. WAP to split a circular linked list into two halves.
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};

void display(struct node *head1)
{
    struct node *ptr = head1;
    do
    {
        printf("\n -> %d", ptr->data);
        ptr = ptr->link;
    } while (ptr != head1);
}

void splitList(struct node *head1)
{
    struct node *slow = head1;
    struct node *fast = head1;
    while (fast->link != head1 && fast->link->link != head1){
        slow = slow->link;
        fast = fast->link->link;
    }
    struct node *head2 = slow->link;
    slow->link = head1;
    struct node *current = head2;
    while (current->link != head1){
        current = current->link;
    }
    current->link = head2;
    printf("\nFirst half:");
    display(head1);
    printf("\nSecond half:");
    display(head2);
}

int main()
{

    struct node *head1 = (struct node *)malloc(sizeof(struct node));
    head1->data = 7;
    head1->link = NULL;

    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    head2->data = 17;
    head2->link = NULL;
    head1->link = head2;

    struct node *head3 = (struct node *)malloc(sizeof(struct node));
    head3->data = 77;
    head3->link = NULL;
    head2->link = head3;

    struct node *head4 = (struct node *)malloc(sizeof(struct node));
    head4->data = 71;
    head4->link = NULL;
    head3->link = head4;

    struct node *head5 = (struct node *)malloc(sizeof(struct node));
    head5->data = 98;
    head5->link = head1;
    head4->link = head5;

    display(head1);
    splitList(head1);

    return 0;
}