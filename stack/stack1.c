#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *array;
};

int empty(struct stack *s){
    if(s->top == -1){
        return 1;
    }
    return 0;
}

int overflow(struct stack *s){
    if(s->top == s->size-1)
        return 1;
    return 0;
}

void push(struct stack *s,int data){
    if (overflow(s)){
        printf("Stack is Overflow...");
    }
    else{
        s->top++;
        s->array[s->top] = data;
    }
}

int pop(struct stack *s){
    if (empty(s)){
        printf("Stack is empty...");
    }
    else{
        s->top--;
        int temp = s->array[s->top];   
        return temp;
    }
}

int main(){

    struct stack s;
    s.size = 70;
    s.top = -1;
    s.array = (int *)malloc(s.size*sizeof(int)); 
    push(&s,7);
    push(&s,10);
    push(&s,110);
    push(&s,1110);
    push(&s,100);
    push(&s,120);
    push(&s,130);

    pop(&s);
    printf("Current Size of the stack : %d\n",s.top);
    printf("Top Element : %d",s.array[s.top]);
    return 0;
}