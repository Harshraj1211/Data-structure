// Write a program to find position of the smallest number & the largest number 
// from given n numbers.
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

    int min=array[0];
    int max=array[0];

    for(int i=0 ; i<size ; i++){
        if(min>array[i]){
            min=array[i];
        }
        else if(max<array[i]){
            max=array[i];
        }
    }

    printf("Min : %d\n",min);
    printf("Max : %d\n",max);
    return 0;
}