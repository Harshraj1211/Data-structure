//  Write a program to insert a number at a given location in an array. 
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

    printf("Array before adding number %d at %d...",number,index);

    for (int i = 0; i < size; i++)
    {
        printf("Element %d : %d\n", i + 1, array[i]);
    }

    for(int i=0 ; i<size ; i++){
        if(index==i){
            array[i]=number;
        }
    }

    printf("Array after adding number %d at %d...\n",number,index);

    for (int i = 0; i < size; i++)
    {
        printf("Element %d : %d\n", i + 1, array[i]);
    }


    return 0;
}