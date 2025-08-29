// 42. Write a program to convert infix notation to prefix notation using stack. 
#include<stdio.h>
#include<string.h>
#define size  100
char stack[size];
int top = -1;

int push(char ch){
    top++;
    stack[top] = ch;
    return stack[top];
}

int pop(){
    if (top>=0){
        return stack[top--];
    }
    return '\0';
}
int peek(){
    return stack[top];
}
void display(){
    int i=0;
    for(i=0 ; i<=top ; i++){
        printf("%c",stack[i]);
    }
}

int priority(char ch){
    if(ch == '+'||ch=='-')
        return 1;
    else if(ch == '*' || ch == '/')
        return 3;
    else if(ch == '^')
        return 6;
    return 0;
}

void infixToPostfix(char ch[]){

    int i = 0, j = 0;
    char s[100] = "";
    while (ch[i] != '\0'){
        if((ch[i]>='A' && ch[i]<='Z') || (ch[i]>='a' && ch[i]<='z')){
            s[j++] = ch[i];
        }
        else if(ch[i] == '('){
            push(ch[i]);
        }
        else if(ch[i]==')'){
            while (top != -1 && peek() != '('){
                s[j++] = pop();
            }
            if (top != -1 && peek() == '('){
                pop();
            }
        }
        else{
            while (top != -1 && priority(ch[i]) <= priority(peek())){
                s[j++] = pop();
            }
            push(ch[i]);
        }
        i++;
    }
    while (top != -1){
        s[j++] = pop();
    }
    s[j] = '\0';

    printf("Postfix: %s\n", strrev(s));
}

int main(){

    char ch[100];
    printf("Enter string : ");
    scanf("%s",ch);
    strrev(ch);
    infixToPostfix(ch);    

    return 0;
}