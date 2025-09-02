// 60. Write a program to implement stack using singly linked list. 
// push = insert at the end
// pop = delete last element
// size = return size of ll
// top = return element on the top of the stack (which is last element)
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *head1=NULL;
struct node *createNode(int x){
    struct node *ptr=NULL;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data=x;
    ptr->link=NULL;
}   

void display(struct node *head1){
    struct node *ptr=NULL;
    ptr=head1;
    while (ptr!=NULL){
        printf("->%d ",ptr->data);
        ptr=ptr->link;
    }
}

struct node *push(int data){
    struct node *ptr=head1;
    struct node *ptr1=(struct node *)malloc(sizeof(struct node));
    ptr1->data=data;
    ptr1->link=NULL;
    if(head1==NULL){
        ptr1->data=data;
        ptr1->link=NULL;
        return ptr1;
    }
    while (ptr!=NULL)
    {
        if (ptr->link==NULL)
        {
            ptr1->data=data;
            ptr->link=ptr1;
            ptr=ptr1;
        }
        ptr=ptr->link;        
    }
}

struct node *top(){
    struct node *ptr=head1;
    while (ptr!=NULL)
    {
        if (ptr->link==NULL)
        {
           printf("%d",ptr->data);
        }
        ptr=ptr->link;
    }
}

struct node *size(){
    struct node *ptr=head1;
    int count=0;
    while (ptr!=NULL)
    {   
        count++;
        ptr=ptr->link;
    }
    printf("%d",count);
}
// struct node *pop(){
//     struct node *ptr=head1;
//     struct node *previous=NULL;
//     while (ptr!=NULL)
//     {
//         if (ptr->link==NULL)
//         {
//             previous->link=NULL
//             free(ptr);
//         }
//         ptr=ptr->link;
//     }
    
// }
int main(){
    head1=createNode(1);
    head1->link=createNode(5);
    head1->link->link=createNode(7);
    head1->link->link->link=createNode(2);
    head1->link->link->link->link=createNode(130);
    display(head1);
    printf("\n");
    push(10);
    printf("\n");
    display(head1);
    printf("\n");
    top();
    printf("\n");
    size();
    printf("\n");
    // pop();
    display(head1);



    return 0;
}