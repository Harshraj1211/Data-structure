//  Write a program to calculate sum of numbers from m to n.
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

    int sum=0;
    int m,n;

    printf("Enter m : ");
    scanf("%d",&m);

    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=m ; i<=n ; i++){
        sum+=array[i];
    }

    printf("SUM : %d",sum);

    return 0;
}