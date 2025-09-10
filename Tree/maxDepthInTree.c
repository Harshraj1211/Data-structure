#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct node{
    int data;
    struct node *leftSubTree;
    struct node *rightSubTree;
}Node;

int maxDepth(Node *head){
    if(head == NULL){
        return 0;
    }

    int ptrLeft = maxDepth(head->leftSubTree);
    int ptrRight = maxDepth(head->rightSubTree);
    
    return  1 + ((ptrLeft > ptrRight) ? ptrLeft : ptrRight);
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

    int ans = maxDepth(a);
    printf("ANS : %d",ans);
    return 0;
}