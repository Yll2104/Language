#include <stdio.h>

void test()
{
    int i = 0;
}

int multiply(int value)
{

    return value * 2; // sobald der return-Befehl aufgerufen wird,
                      // erflogt die Rückgabe des Wertes (value * 2)
                      // und die Funktion wir augenblicklich verlassen
}
//  Zähler          Nenner
int calcDivMod(int numerator, int denominator)
{
    int divResult = numerator / denominator; // Integerdivisionsergebnis
    int modResult = numerator % denominator; // Moduloergebnis
    return divResult;
}

int calcDivMod2(int numerator, int denominator, int *pDivResult, int *pModResult)
{
    if (denominator != 0)
    {
        *pDivResult = numerator / denominator;
        *pModResult = numerator % denominator;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int divResult = 0;
    int modResult = 0;
    int succes = 0;
    int numerator = 9;
    int denominator = 2;

    succes = calcDivMod2(numerator, denominator, &divResult, &modResult);

    if (succes == 1)
    {
        printf("divResult: %d / %d = %d\n", numerator, denominator, divResult);
        printf("divResult: %d %% %d = %d\n", numerator, denominator, modResult);
    }else{
        printf("Division by zero not defined!\n");
    }
    return 0;
}