// sorting of singley linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *createNode(int data){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->link=NULL;
    return ptr;
}
void display(struct node *head){
    struct node *ptr=head;
    while (ptr!=NULL){
        printf(" -> %d\n",ptr->data);
        ptr=ptr->link;
    }
}

struct node *sort(struct node *head){
    struct node *i,*j;
    int temp;
    for(i=head ; i!=NULL ; i=i->link){
        for (j=head ; j!=NULL ; j=j->link){
            if (i->data < j->data){
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
    return head;
}

int main(){

    struct node *head=createNode(14);
    head->link=createNode(22);
    head->link->link=createNode(7);
    head->link->link->link=createNode(12);
    head->link->link->link->link=createNode(11);
    head->link->link->link->link->link=createNode(2006);
    head->link->link->link->link->link->link=createNode(3);

    printf("\nDisplay Before sorting : \n");

    display(head);

    sort(head);

    printf("\nDisplay After sorting : \n");

    display(head);
    return 0;
}