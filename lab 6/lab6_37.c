// 37. Valid Parenthesis Problem 
// Chef has a string which contains only the characters '{', '}', '[', ']', '(' and ')'.  
// Now Chef wants to know if the given string is balanced or not.  
// If is balanced then print 1, otherwise print 0.  
// A balanced parenthesis string is defined as follows: 
// • The empty string is balanced 
// • If P is balanced then (P), {P}, [P] is also balanced 
// • if P and Q are balanced PQ is also balanced 
// • "([])", "({})[()]" are balanced parenthesis strings  
// • "([{]})", "())" are not balanced. 
 
// Input Format:  
// The first line of the input contains a single integer T denoting the number of 
// test cases. The description of T test cases follows. The first and only line of 
// each test case contains a single string 
 
// Output Format:  
// For each test case, print a single line containing the answer. 
 
// Sample Example: 
 
//  Output: 
// 1 
// 0 
// 1 
// 0 
// Input: 
 
// 4 
// () 
// ([)] 
// ([{}()])[{}] 
// [{{}] 

#include<stdio.h>
#include <stdbool.h>
#include <string.h>
#define size 100

char stack[size];
int top = -1;

char push(char ch){
    top++;
    stack[top] = ch;
    return stack[top];
}
void pop(){
    top--;
}

bool isValid(char* str) {
    int len = strlen(str);
    for(int i=0 ; i<len ; i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '['){
            push(str[i]);
        }
        else{
            // if(len == 0){
            //     return false;
            // }
            if( (str[i] == ')' && stack[top] != '(') || 
                (str[i] == '}' && stack[top] != '{') || 
                (str[i] == ']' && stack[top] != '[')){
                return false;
            }
            top--;
        }
    }
    return top == -1;       
}

int main(){
    char ch[100];
    printf("Enter string : ");
    scanf("%s",ch);
    if (isValid(ch)){
        printf("Valid!!!");
    }
    else{
        printf("Invalid!!!");
    }
    
}