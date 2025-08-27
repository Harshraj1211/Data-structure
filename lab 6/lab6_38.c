// 38. Removing starts from a string Problem 
// You are given a string s, which contains stars *. In one operation, you can: 
// Choose a star in s. Remove the closest non-star character to its left, as well as 
// remove the star itself. Return the string after all stars have been removed. 
 
// Note :  
// • The input will be generated such that the operation is always possible. 
// • It can be shown that the resulting string will always be unique. 
 
// Sample Example-1: 
// Input: s = "leet**cod*e".             
// Output: "lecoe" 
 
// Sample Example-2: 
// Input: s = "erase*****"     
// Output: ""
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100

char s[size];
int top = -1;

char push(char ch){
    top++;
    s[top] = ch;
    return s[top];
}
void pop(){
    top--;
}
void display(){
    int i=0;
    for(i=0 ; i<=top ; i++){
        printf("%c",s[i]);
    }
}
void Removing_starts_fromString(char ch[]){
    int i=0;
    while (ch[i]!='\0'){
        if(ch[i] == '*'){
            pop();
        }
        else{
            push(ch[i]);
        } 
        i++;
    }
    display();
}
int main(){

    char ch[100];
    printf("Enter string : ");
    scanf("%s",ch);
    Removing_starts_fromString(ch);
    return 0;
}