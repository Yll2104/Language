#include <stdio.h>

#define SIZE 26

//Implementation of the function getAge --> reinschrieben irgendwas in die Function
//int = Rückgabedatentyp der Funktion
//      void(kein Rückgabewert)
//      char, int, float, double
// getAge = Funktionsname
// () = Parameterliste, Liste von Werten, die der Funktion übergeben werden
// int catNumber = parameter, welcher in der FUnktion verwednet werden kann
// und von der aufrufenden Funktion bestimmt wird



int getAge(int catNumber); // catalogNumber = catNumber
void printAges(int age[]);

int main()
{
    int age[SIZE] = {0};

    //Self defined functions should start with a verb 
    for (int i = 0; i < SIZE; i++)
    {
        age[i] = getAge(i);
    }

    printAges(age);
    return 0;
}

void printAges(int age[]){
    for (int i = 0; i < SIZE; i++)
    {
        printf("Age of Student #%d: %d\n",i+1, age[i]);
    }
    
}

int getAge(int catNumber)
{
    int age = 0;
    do
    {
        printf("Enter the ages of student %d: \n", catNumber + 1);
        scanf("%d", &age);
    } while (age < 14 || age > 22);

    return age;
}



