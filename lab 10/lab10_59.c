// Write a program to remove the duplicates nodes from given sorted Linked List. 
// • Input: 1 → 1 → 6 → 13 → 13 → 13 → 27 → 27 
// • Output: 1 → 6 → 13 → 27

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};

struct node *createList(int n){
    struct node *head=NULL;
    struct node *temp=NULL;
    struct node *new_node=NULL;

    for(int i=0 ; i<n ; i++){

        new_node=(struct node *)malloc(sizeof(struct node));
        if (!new_node) {
            printf("Memory allocation failed\n");
            return head;
        }
        printf("Enter element %d : ",(i+1));
        scanf("%d",&new_node->data);
        new_node->link=NULL;
        if(head==NULL){
            head=new_node;
            temp=head;
        }
        else{
            temp->link=new_node;
            temp=new_node;
        }
    }
    return head;
}

void *displayList(struct node *head1){
    struct node *ptr=NULL;
    ptr=head1;
    while (ptr!=NULL){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
}
struct node *removeDuplicate(struct node *head1){
    struct node *ptr = head1;
    while (ptr != NULL && ptr->link != NULL) {
        if (ptr->data == ptr->link->data) {
            ptr->link = ptr->link->link;
        } else {
            ptr = ptr->link;
        }
    }
    return head1;
}
int main(){

    int n;
    struct node *head1;

    printf("How many nodes u want to enter :");
    scanf("%d",&n);
    head1=createList(n);
    printf("\nAfter removing duplicate elements : \n");
    removeDuplicate(head1);
    displayList(head1);
    return 0;
}