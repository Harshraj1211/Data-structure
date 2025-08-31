// 53. WAP to sort the array elements using Pointer. 
#include<stdio.h>
#include<stdlib.h>
void sort(int *ptr,int n){
    int i;
    int j;
    for(i=0 ; i<n ; i++){
        for(j=i+1 ; j<n ; j++){
            if(ptr[i]>ptr[j]){
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
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

    sort(ptr,n);
    printf("Elements after sorting : \n");
    for(i=0 ; i<n ; i++){
        printf("%d\n",ptr[i]);
    }

    return 0;
}