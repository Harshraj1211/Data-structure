// STEP : 1 process the root node
// STEP : 2 traverse the left subtree in ptrorder
// STEP : 3 traverse the right subtree in ptrorder

// for integers!!!

#include<stdio.h>
#include<stdlib.h>
typedef struct node {
    int data;
    struct node *leftSubTree;
    struct node *rightSubTree;
} Node;

void preordered(Node *a){

    Node *ptr = a;
    Node *left = a->leftSubTree;
    Node *right = a->rightSubTree;

    if(ptr == NULL){
        printf("Empty Tree!!!");
    }
    printf(" -> %d",ptr->data);
    if (left!=NULL){
        preordered(left);
    }
    if (right!=NULL){
        preordered(right);
    }
}

int main(){

    Node *a = (Node *)malloc(sizeof(Node));
    a->data=7;
    a->leftSubTree=NULL;
    a->rightSubTree=NULL;

    Node *b = (Node *)malloc(sizeof(Node));
    b->data=1;
    b->leftSubTree=NULL;
    b->rightSubTree=NULL;
    a->leftSubTree=b;

    Node *c = (Node *)malloc(sizeof(Node));
    c->data=2;
    c->leftSubTree=NULL;
    c->rightSubTree=NULL;
    b->leftSubTree=c;

    Node *d = (Node *)malloc(sizeof(Node));
    d->data=5;
    d->leftSubTree=NULL;
    d->rightSubTree=NULL;
    a->rightSubTree=d;

    Node *e = (Node *)malloc(sizeof(Node));
    e->data=130;
    e->leftSubTree=NULL;
    e->rightSubTree=NULL;
    d->leftSubTree=e;

    Node *g = (Node *)malloc(sizeof(Node));
    g->data=12;
    g->leftSubTree=NULL;
    g->rightSubTree=NULL;
    d->rightSubTree=g;

    Node *f = (Node *)malloc(sizeof(Node));
    f->data=11;
    f->leftSubTree=NULL;
    f->rightSubTree=NULL;
    e->rightSubTree=f;

    preordered(a);

    return 0;
}

// for charactar!!!

// #include<stdio.h>
// #include<stdlib.h>
// typedef struct node {
//     char data;
//     struct node *leftSubTree;
//     struct node *rightSubTree;
// } Node;

// void preordered(Node *a){

//     Node *ptr = a;
//     Node *left = a->leftSubTree;
//     Node *right = a->rightSubTree;

//     if(ptr == NULL){
//         printf("Empty Tree!!!");
//     }
//     printf(" -> %c",ptr->data);
//     if (left!=NULL){
//         preordered(left);
//     }
//     if (right!=NULL){
//         preordered(right);
//     }
// }

// int main(){

//     Node *a = (Node *)malloc(sizeof(Node));
//     a->data='a';
//     a->leftSubTree=NULL;
//     a->rightSubTree=NULL;

//     Node *b = (Node *)malloc(sizeof(Node));
//     b->data='b';
//     b->leftSubTree=NULL;
//     b->rightSubTree=NULL;
//     a->leftSubTree=b;

//     Node *c = (Node *)malloc(sizeof(Node));
//     c->data='c';
//     c->leftSubTree=NULL;
//     c->rightSubTree=NULL;
//     b->leftSubTree=c;

//     Node *d = (Node *)malloc(sizeof(Node));
//     d->data='d';
//     d->leftSubTree=NULL;
//     d->rightSubTree=NULL;
//     a->rightSubTree=d;

//     Node *e = (Node *)malloc(sizeof(Node));
//     e->data='e';
//     e->leftSubTree=NULL;
//     e->rightSubTree=NULL;
//     d->leftSubTree=e;

//     Node *g = (Node *)malloc(sizeof(Node));
//     g->data='g';
//     g->leftSubTree=NULL;
//     g->rightSubTree=NULL;
//     d->rightSubTree=g;

//     Node *f = (Node *)malloc(sizeof(Node));
//     f->data='f';
//     f->leftSubTree=NULL;
//     f->rightSubTree=NULL;
//     e->rightSubTree=f;

//     preordered(a);

//     return 0;
// }