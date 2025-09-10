#include<stdio.h>
#include<stdlib.h>

int stack[100];
int top = -1;

struct node{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};

struct node *head = NULL;

struct node *createNode(int data){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->leftChild = NULL;
    ptr->rightChild = NULL;
    return ptr;
}

void push(int data){
    stack[++top]=data;
}

int pop(){
    return stack[top--];
}

struct node *insert(struct node *head, int data){
    if (head == NULL){
        return createNode(data);
    }
    
    if (data < head->data){
        head->leftChild = insert(head->leftChild, data);
    }
    else if (data > head->data){
        head->rightChild = insert(head->rightChild, data);
    }
    return head;
}

void inordered(struct node *head){
    if (head == NULL){
        return;
    }
    inordered(head->leftChild);
    push(head->data);
    inordered(head->rightChild);
}

int findKthminimumElement(struct node* head,int k){
    top = -1;
    inordered(head);
    if (k <= 0 || k > top + 1){
        printf("Invalid k!!!!!!!\n");
        return -1;
    }
    return stack[k-1];
}

int main(){

    head = NULL;    
    head = insert(head, 10);
    head = insert(head, 5);
    head = insert(head, 130);
    head = insert(head, 1);
    head = insert(head, 20);
    head = insert(head, 11);
    head = insert(head, 99);
    head = insert(head, 555);

    int ans = findKthminimumElement(head,2);

    printf("Answer : %d",ans);

    return 0;
}