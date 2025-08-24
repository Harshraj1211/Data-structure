#include <stdio.h>

int main() {
    int size;
    printf("Enter size of the array: ");
    scanf("%d", &size);

    int array[size];
    printf("Enter elements of the array:\n");
    for(int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int temp[size];
    int newSize = 0;

    for(int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for(int j = 0; j < newSize; j++) {
            if(array[i] == temp[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate) {
            temp[newSize] = array[i];
            newSize++;
        }
    }

    printf("\nArray after removing duplicates:\n");
    for(int i = 0; i < newSize; i++) {
        printf("Element %d: %d\n", i + 1, temp[i]);
    }

    return 0;
}
