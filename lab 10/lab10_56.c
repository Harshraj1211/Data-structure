// 56. Write a program to implement a node structure for singly linked list. Read the 
// data in a node, print the node.
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void print_node(struct node *head1){
    struct node *ptr=NULL;
    ptr=head1;
    
    while (ptr!=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    
}

int main(){

    struct node *head1;
    head1=(struct node *)malloc(sizeof(struct node));
    head1->data=7;
    head1->link=NULL;

    struct node *head2;
    head2=(struct node *)malloc(sizeof(struct node));
    head2->data=17;
    head2->link=NULL;
    head1->link=head2;

    struct node *head3;
    head3=(struct node *)malloc(sizeof(struct node));
    head3->data=27;
    head3->link=NULL;
    head2->link=head3;

    print_node(head1);

    return 0;
}