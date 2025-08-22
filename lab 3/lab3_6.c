//Read n numbers in an array then read two different numbers, replace 1st 
//number with 2nd number in an array and print its index and final array. 
#include<stdio.h>
int main(){

    int size;
    printf("Enter size of the array : ");
    scanf("%d",&size);

    int array[size];

    printf("Enter elements of the array : \n");

    for(int i=0 ; i<size ; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&array[i]);
        printf("\n");
    }
    int i,j;
    int num1;
    int num2;

    printf("Enter number 1 : ");
    scanf("%d",&num1);

    printf("Enter number 2 : ");
    scanf("%d",&num2);

    for(i=0 ; i<size ; i++){
        if(num1==array[i]){
            array[i]=num2;
        }
    }

    printf("Elements of the array : ");
    for(int i=0 ; i<size ; i++){
        printf("\n");
        printf("Element %d is %d",i,array[i]);
    }

    return 0;
}