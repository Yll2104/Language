#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 20
#define UPPER 'z'
#define LOWER 'a'

int main()
{
    char array[SIZE];
    int minIndex = 0;

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = (char)(rand() % (UPPER - LOWER + 1) + LOWER);
    }

    for (int i = 0; i < SIZE; i++)
    {

        printf("%c ", array[i]);
        if ((i + 1) % 5 == 0)
        {
            printf("\n");
        }
    }

    // Calculate the index of the smallest element
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] < array[minIndex])
        {
            minIndex = i;
        }
    }
    printf("Min Value: %c at Min Index: %d\n", array[minIndex], minIndex);


    
    // Calculate the index of the smallest element
    int maxIndex = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] > array[maxIndex])
        {
            maxIndex = i;
        }
    }

    printf("Max Value: %c at Min Index: %d\n", array[maxIndex], maxIndex);

    return 0;
}
