#include <stdio.h>

int main(){ 
    int age = 0;

    printf("Enter your age: ");
    int returnValue = scanf("%d", &age);
    printf("ReturnValue1: %d\n", returnValue);

    int day = 0;
    int month = 0;
    printf("Enter a date [MM:DD]: ");
    returnValue = scanf("%d:%d", &month, &day);
    printf("ReturnValue2: %d", returnValue);
    

    return 0;
}