//  Write a program to delete a number from a given location in an array. 
#include<stdio.h>
int main(){

    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter elements of the array:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    int number;
    int index;

    printf("Enter Number : ");
    scanf("%d", &number); 
    
    printf("Enter index : ");
    scanf("%d", &index);


    printf("Before : \n");

    for (int i = 0; i < size; i++)
    {
        printf("Element %d : %d\n", i + 1, array[i]);
    }

    for(int i=0 ; i<size ; i++){
        if(array[i]==number && index==i){
            array[i]=NULL;
        }
    }
    
    printf("After : \n");
    
    for (int i = 0; i < size; i++)
    {
        printf("Element %d : %d\n", i + 1, array[i]);
    }
    return 0;
}