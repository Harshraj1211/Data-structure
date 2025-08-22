//Write a program to find whether the array contains a duplicate number or not. 
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

    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(array[i]==array[j]){
                printf("Duplicate number is %d at [%d and %d]\n",array[i],i,j);
            }
            else{
                printf("in this array, number %d is not duplicate number...\n",array[i]);
            }
        }
    }    
    return 0;
}