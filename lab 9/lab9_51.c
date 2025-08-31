// 51. WAP to calculate the sum of n numbers using Pointer. 
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
    int sum=0;
    for(i=0 ; i<n ; i++){
        sum+=ptr[i];
    }

    printf("Total sum : %d",sum);

    return 0;
}