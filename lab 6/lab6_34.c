// 34. Write a menu driven program to implement following operations on the Stack 
// using an Array 
// • PUSH, POP, DISPLAY 
// • PEEP, CHANGE 
#include<stdio.h>
#include<stdlib.h>

int array[20];
int top = -1;

int push(int data){
    top++;
    array[top]=data;
    return array[top];
}

void pop(){
    top--;
}

void display(int array[]){
    int i=0;
    for(i=0 ; i<=top ; i++){
        printf("\n -> %d",array[i]);
    }
}

int peep(){
    return array[top];
}

void change(int old,int new){
    int i=0;
    for (i = 0 ; i <= top ; i++){
        if (array[i] == old){
            array[i] = new;
            break;
        }
    }
}

int main(){

    push(7);
    push(75);
    push(55);
    push(20);
    push(18);
    push(27);
    push(130);

    pop();

    int x = peep();
    printf("%d",x);

    change(20,100);

    printf("\n Stack Display : ");
    display(array);

    return 0;
}