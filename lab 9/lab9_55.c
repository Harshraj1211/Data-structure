// 55. WAP to define a C structure named Student (roll_no, name, branch and 
// batch_no) and also to access the structure members using Pointer.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    struct Student {
        int roll_no;
        char name[50];
        char branch[50];
        int batch_no;
    };

    struct Student *ptr = (struct Student *)malloc(sizeof(struct Student));

    strcpy(ptr->name,"Harshrajsinh Jitendrasinh Gohil");
    ptr->roll_no = 130;
    ptr->batch_no = 2;
    strcpy(ptr->branch,"CSE");

    printf("Name: %s\n", ptr->name);
    printf("Roll No: %d\n", ptr->roll_no);
    printf("Branch: %s\n", ptr->branch);
    printf("Batch No: %d\n", ptr->batch_no);

    free(ptr);

    return 0;   
}