// 54. WAP to check whether the string is Palindrome or not using Pointer.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    char *ptr = (char *)malloc(100*sizeof(char));

    printf("Enter string : ");
    scanf("%s",ptr);
    char *temp = (char *)malloc(strlen(ptr) + 1);
    strcpy(temp, ptr);      // Copy original to temp
    strrev(temp);           // Reverse the copy
    printf("reversed string : %s \n",temp);

    if(strcmp(temp,ptr)==0){
        printf("string is pelindrome");
    }
    else{
        printf("string is not pelindrome");
    }
    free(ptr);
    free(temp);
    return 0;
}