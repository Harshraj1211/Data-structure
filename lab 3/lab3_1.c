//  Write a program to read and display n numbers using an array. 
#include<stdio.h>
int main(){

    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int array[size];

    printf("Enter elements of the array : ");

    for(int i=0 ; i<size ; i++){
        printf("\n");
        printf("Enter element %d : ",i+1);
        scanf("%d",&array[i]);
    }

    printf("Elements of the array : ");
    for(int i=0 ; i<size ; i++){
        printf("\n");
        printf("Element %d is %d",i+1,array[i]);
    }

    return 0;
}