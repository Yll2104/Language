#include <stdio.h>

int main()
{
    int array[5] = {6, 5, 8, 6, 3};
    int min = 0;

    for (int i = 0; i < 4; i++)
    {
        if (array[i] > array[i + 1])
        {
            min = array[i + 1];
        }

    }

    printf("The lowest Element is: %d", min);
    return 0;
}