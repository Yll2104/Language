#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define UL 32.0
#define LL -32.0
#define SIZE 24

int main()
{
    double array[24];
    int counter = 0;
    int negativeNumber = 0;
    int zehnerStelleDrei = 0;
    int zehntelStelleZwei = 0;
    int einstelligeZahl = 0;

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = ((double)rand() / RAND_MAX) * (UL - LL) + LL;
    }

    for (int i = 0; i < SIZE; i++)
    {
        printf("%8.2lf", array[i]);
        counter++;
        if (counter == 8)
        {
            printf("\n");
            counter = 0;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        if (array[i] < 0)
        {
            negativeNumber++;
        }
        else if (abs((int)array[i]) / 10 == 3)
        {
            zehnerStelleDrei++;
        }
        else if (abs((int)(array[i] * 10)) % 10 == 2)
        {
            zehntelStelleZwei++;
        }
        else if (abs((int)array[i]) < 10)
        {
            einstelligeZahl++;
        }
    }

    printf("\n");

    printf("\nErgenisse:\n");
    printf("Negative Zahlen:                              %d\n", negativeNumber);
    printf("Zahlen mit 3 an der Zehnerstelle:             %d\n", zehnerStelleDrei);
    printf("Zahlen mit 2 an der Zehntelstelle:            %d\n", zehntelStelleZwei);
    printf("Zahlen mit einem einstelligen Vorkommastelle: %d\n", einstelligeZahl);

    return 0;
}