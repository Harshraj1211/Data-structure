// 52. WAP to find the largest element in the array using Pointer. 
#include<stdio.h>
#include<stdlib.h>
int main(){

    int *ptr;
    int n;

    printf("Enter size of numbers : ");
    scanf("%d",&n);

    ptr=(int *)malloc(n*sizeof(int));
    int i;
    printf("Enter elements of the ptr : \n");
    for(i=0 ; i<n ; i++){
        scanf("%d",&ptr[i]);
    }

    int largest=ptr[0];

    for(i=0 ; i<n ; i++){
        if(largest<ptr[i]){
            largest=ptr[i];
        }
    }

    printf("Largest : %d",largest);

    return 0;
}