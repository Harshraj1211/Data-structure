// 43. Write a program for evaluation of postfix Expression using Stack.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<ctype.h>
#define SIZE 100

int stack[SIZE];
int top = -1;

void push(int val) {
    stack[++top] = val;
}

int pop() {
    return stack[top--];
}

int check(char ch){
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int postfixToInfix(char ch[]){
    int i = 0;

    while (ch[i] != '\0'){
        char temp = ch[i];

        if (isdigit(temp)){
            push(temp-'0');
        }
        else if (check(temp)){
            int op2 = pop();
            int op1 = pop();
            int ans;
            switch (temp){
                case '+':
                    ans = op1 + op2;
                    break;
                case '-':
                    ans = op1 - op2;
                    break;
                case '*':
                    ans = op1*op2;
                    break;
                case '/':
                    ans = op1/op2;
                    break;
                case '%': 
                    ans = op1 % op2; 
                    break;

                default:
                    break;
            }
            push(ans);
        }
        i++;
    }
    return pop();
}

int main(){
    char ch[] = "23*54*+9-";
    int result = postfixToInfix(ch);
    printf("ANS : %d",result);
    return 0;
}