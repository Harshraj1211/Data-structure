//  Write a program to insert a number in an array that is already sorted in an
//  ascending order.
#include <stdio.h>
void sort(int array[],int size){
    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            if(array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}
int main()
{

    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    int number;
    int index;

    printf("Enter Number : ");
    scanf("%d", &number);

    printf("Enter index : ");
    scanf("%d", &index);

    for(int i=0 ; i<size ; i++){
        if(array[i]==number && index==i){
            array[i]=number;
        }
    }

    sort(array,size);

    for (int i = 0; i < size; i++)
    {
        printf("Element %d : %d\n", i + 1, array[i]);
    }

    return 0;
}