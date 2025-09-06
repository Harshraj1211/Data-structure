// A 75. Write a menu driven program to implement Binary Search Tree (BST) & perform
// following operations:
// • Insert a node
// • Delete a node
// • Search a node
// • Preorder Traversal
// • Postorder Traversal
// • Inorder Traversal
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *leftChild;
    struct node *rightChild;
};

struct node *head = NULL;

struct node *createNode(int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->leftChild = NULL;
    ptr->rightChild = NULL;
    return ptr;
}

struct node *insert(struct node *head, int data)
{
    if (head == NULL)
    {
        return createNode(data);
    }
    
    if (data < head->data)
    {
        head->leftChild = insert(head->leftChild, data);
    }
    else if (data > head->data)
    {
        head->rightChild = insert(head->rightChild, data);
    }

    return head;
}

struct node *findright(struct node *head){
    struct node *ptr = head;
    while (ptr->rightChild!=NULL){
        if(ptr->rightChild->leftChild->rightChild == NULL && ptr->rightChild->leftChild->leftChild == NULL){
            return ptr->rightChild->leftChild;
        }
        ptr = ptr->rightChild;
    }
    return head;
}


void inordered(struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    inordered(head->leftChild);
    printf("%d\n", head->data);
    inordered(head->rightChild);
}

void preordered(struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    printf("%d\n", head->data);
    preordered(head->leftChild);
    preordered(head->rightChild);
}

void postordered(struct node *head)
{
    if (head == NULL)
    {
        return;
    }
    postordered(head->leftChild);
    postordered(head->rightChild);
    printf("%d\n", head->data);
}

int searchNode(struct node *head, int value)
{
    if (head == NULL)
    {
        return 0;
    }
    if (value > head->data)
    {
        return searchNode(head->rightChild, value);
    }
    else if (value < head->data)
    {
        return searchNode(head->leftChild, value);
    }
    else if (value == head->data)
    {
        return 1;
    }

    return 0;
}

struct node *findLastRight(struct node *head){
    if(head->rightChild == NULL){
        return head;
    }
    return findLastRight(head->rightChild);
}

struct node *helper(struct node *head){
    if(head->leftChild == NULL){
        return head->rightChild;
    }
    else if(head->rightChild == NULL){
        return head->leftChild;
    }
    else{
        struct node *rightChild = head->rightChild;
        struct node *lastRightChild = findLastRight(head->leftChild);
        lastRightChild->rightChild = rightChild;
        return head->leftChild; 
    }
}


struct node *deleteNode(struct node *head,int val){
    if(head == NULL){
        return NULL;
    }
    else if(head->data == val){
        return helper(head);
    }
    else{
        struct node *temp=head;
        while (head!=NULL){
            if(head->data < val){
                if(head->rightChild!=NULL && head->rightChild->data == val){
                    head->rightChild = helper(head->rightChild);
                    break;
                }
                else{
                    head = head->rightChild;
                }
            }
            else{
                if(head->leftChild!=NULL && head->leftChild->data == val){
                    head->leftChild = helper(head->leftChild);
                    break;
                }
                else{
                    head = head->leftChild;
                }
            }
        }
        return temp;        
    }

}


int main()
{

    head = NULL;
    head = insert(head, 10);
    head = insert(head, 5);
    head = insert(head, 130);
    head = insert(head, 1);

    // printf("Inordered traversal!!!\n");
    // inordered(head);
    // printf("Preordered traversal!!!\n");
    // preordered(head);
    
    deleteNode(head,1);
    
    printf("Postordered traversal!!!\n");
    postordered(head);

    // printf("Search for 5\n");
    // int temp = searchNode(head, 5);
    // if (temp == 1)
    // {
    //     printf("TRUE!!!");
    // }
    // else if (temp == 0)
    // {
    //     printf("FALSE!!!");
    // }

    return 0;
}