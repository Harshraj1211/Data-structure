// Write a program to calculate average of first n numbers. 
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

    int sum=0;

    for(int i=0 ; i<size ; i++){
        sum+=array[i];
    }

    int avg=0;

    avg=sum/size;

    printf("\nSUM : %d\n",sum);
    printf("Average : %d",avg);
    return 0;
}