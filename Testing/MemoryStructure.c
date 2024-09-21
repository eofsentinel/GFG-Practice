#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\nArray:\n");
    int two[10][10];
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%ld ", &(two[i][j]));
        }
        printf("\n");
    }

    printf("\nPointers:\n");
    int** twop = malloc(10 * sizeof(int*));
    for (int i = 0; i < 10; i++)
    {
        twop[i] = malloc(10 * sizeof(int));
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%ld ", &(two[i][j]));
        }
        printf("\n");
    }
}