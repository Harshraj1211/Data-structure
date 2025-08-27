// 40. Vowel Anxiety Problem 
// Utkarsh has recently started taking English-language classes to improve his 
// reading and writing skills. However, he is still struggling to learn English. His 
// teacher gave him the following problem to improve his vowel-identification 
// skills:   
// There is a string S of length N consisting of lowercase English letters only.  
// Utkarsh has to start from the first letter of the string. 
// Each time he encounters a vowel; he has to reverse the entire substring that 
// came before the vowel. 
// Utkarsh needs help verifying his answer. Can you print the final string after 
// performing all the operations for him? 
// Input Format: 
// • First line will contain T, number of test cases. Then T test cases follow. 
// • The first line of each test case contains N, the length of the string. 
// • The second line contains S, the string itself.  
// Output Format: 
// For each test case, output in a single line the final string after traversing S from 
// left to right and performing the necessary reversals. 
// Sample Example: 
// Output: 
// hgfeabcdij 
// gacbade 
// Input: 
// 2 
// 10 
// abcdefghij 
// 7 
// bcadage
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

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

void display(){
    int i=0;
    for(i=0 ; i<=top ; i++){
        printf("%c",stack[i]);
    }
}

void stackRevversed(char stack[],int end){
    int start = 0;
    char temp;
    while (start < end) {
        temp = stack[start];
        stack[start] = stack[end];
        stack[end] = temp;
        start++;
        end--;
    }
}
bool isVowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        return true;
    }
    return false;
}
void VowelAnxiety(char ch[]){
    int i=0;
    while(ch[i] != '\0'){
        if(!isVowel(ch[i])){
            push(ch[i]);
        }
        else{
            stackRevversed(stack,top);
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
    VowelAnxiety(ch); 
    return 0;
}