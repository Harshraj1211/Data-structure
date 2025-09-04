// fing gcd and add between 2 node...
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
int GCD(int n1, int n2)
{
    int temp = (n1 < n2) ? n1 : n2;
    int gcd=1;
    for (int i = 1; i <= temp; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd=i;
        }

    }
    return gcd;
}
struct node *addGCD(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr2 = head->link;

    while (ptr1->link != NULL)
    {
        int temp = GCD(ptr1->data, ptr2->data);
        struct node *node1 = (struct node *)malloc(sizeof(struct node));
        node1->data = temp;
        node1->link = ptr2;
        ptr1->link = node1;

        ptr1 = ptr1->link->link;
        ptr2 = ptr2->link;
    }
    return head;
}
int main()
{

    struct node *head = createNode(18);
    head->link = createNode(6);
    head->link->link = createNode(10);
    head->link->link->link = createNode(3);
    
    printf("\nBefore : \n");
    display(head);

    head = addGCD(head);

    printf("\nAfter : \n");
    display(head);

    return 0;
}
