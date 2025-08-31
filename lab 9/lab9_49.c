// 49. WAP to allocate and de-allocate memory for int, char and float variable at 
// runtime. 
#include<stdio.h>
#include<stdlib.h>
int main(){

    int *ptr1 = (int *)malloc(sizeof(int)); // for int
    char *ptr2 = (char *)malloc(sizeof(char)); // for char
    float *ptr3 = (float *)malloc(sizeof(float)); // for float

    if(*ptr1 && *ptr2 && *ptr3){
        *ptr1 = 7;
        *ptr2 = 'H';
        *ptr3 = 7.77;

        printf("Ptr 1 : %d\n",*ptr1);
        printf("Ptr 2 : %c\n",*ptr2);
        printf("Ptr 3 : %f\n",*ptr3);

        free(ptr1);
        free(ptr2);
        free(ptr3);
    }

    return 0;
}