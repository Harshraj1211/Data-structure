// B 76. Write a program to check whether the given two trees are same or not. 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};

struct node *head = NULL;
struct node *head1 = NULL;

struct node *createNode(int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->leftChild = NULL;
    ptr->rightChild = NULL;
    return ptr;
}

struct node *insertNode(struct node *head,int data){

    if(head == NULL){
        return createNode(data);
    }

    else if(data > head->data){
        head->rightChild = insertNode(head->leftChild,data);
    }

    else if(data < head->data){
        head->leftChild = insertNode(head->rightChild,data);
    }

    return head;
}

int check(struct node *head,struct node *head1){
    if(head == NULL || head1 == NULL){
        if(head == head1){
            return 1;
        }
        return 0;
    }

    if(head->data == head1->data){
        if(check(head->leftChild,head1->leftChild) && check(head->rightChild,head1->rightChild)){
            return 1;
        }
    }
    return 0;
}


int main(){

    head = createNode(7);
    
    head = insertNode(head,10);
    head = insertNode(head,5);
    head = insertNode(head,15);
    head = insertNode(head,1);
    
    
    head1 = createNode(7);
    
    head1 = insertNode(head1,10);
    head1 = insertNode(head1,5);
    head1 = insertNode(head1,15);
    head1 = insertNode(head1,1);
    
    if(check(head,head1) == 1){
        printf("TRUE!!!");
    }
    else{
        printf("FALSE!!!");
    }

    return 0;
}