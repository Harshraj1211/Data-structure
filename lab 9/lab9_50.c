// 50. WAP to get and print the array elements using Pointer. 
#include<stdio.h>
#include<stdlib.h>
int main(){

    int *ptr;
    int size;

    printf("enter size of the array : ");
    scanf("%d",&size);

    ptr=(int *)malloc(size*sizeof(int));
    int i;
    printf("Enter Elements of the array : \n");
    for(i=0 ; i<size ; i++){
        printf("Enter element %d : \n",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("Printing Elements of the array : \n");
    for(i=0 ; i<size ; i++){
        printf("Element %d is %d\n",i+1,ptr[i]);
    }

    return 0;
}