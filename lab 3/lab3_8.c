// WAP to sort the N names in an alphabetical order.
#include <stdio.h>
#include <string.h>
int main()
{

    int nsize;
    printf("Enter how many names u wont to enter : ");
    scanf("%d", &nsize);

    char array[nsize][100];

    int i;

    for (i = 0; i < nsize; i++)
    {
        printf("Enter name %d : ", i + 1);
        scanf("%s", array[i]);
    }

    printf("Before sorting...");

    for (i = 0; i < nsize; i++)
    {
        printf("Name %d : %s\n", i + 1, array[i]);
    }

    int j;
    char temp[100];
    for (i = 0; i < nsize - 1; i++)
    {
        for (j = i + 1; j < nsize; j++)
        {
            if (strcmp(array[i], array[j]) > 0)
            {
                strcpy(temp, array[i]);
                strcpy(array[i], array[j]);
                strcpy(array[j], temp);
            }
        }
    }

    printf("After sorting...");
    
    for (i = 0; i < nsize; i++)
    {
        printf("Name %d : %s\n", i + 1, array[i]);
    }

    return 0;
}