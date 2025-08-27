// 35. How stack can be used to recognize strings aca, bcb, abcba, abbcbba? Write a 
// program to solve the above problem. 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100

char s[size];
int top = -1;

void push(char ch){
    top++;
    s[top] = ch;
    return s[top];
}

void display(){
    int i=0;
    for (i = 0 ; i <= top ; i++){
        printf("\n -> %c \n",s[i]);   
    }
}

void recognize(char str[]){
    
    top = 0;
    s[top] = 'c';
    char next = str[0];
    while (!strcmp(next,'c')){
        if (next == ' '){
            printf("String is invelid!!!");
            break;
        }
        push(next);
        next = str[top];
    }

    while (!strcmp(s[top],'c')){
        next = str[top];
        char ch = pop();
        if (!strcmp(next,ch)){
            printf("Invelid String !!!");
            break;
        }
    }

    next = str[top];
    
    if(strcmp(next,' ')){
        printf("Velid String !!!");
    }
    else{
        printf("Invelid string !!!");
    }
    
}

int main(){
    push('a');
    push('b');
    push('b');
    push('c');
    push('b');
    push('b');
    push('a');

    char str[7]={'a','b','b','c','b','b','a'};

    recognize(str);

    // display();
    return 0;
}