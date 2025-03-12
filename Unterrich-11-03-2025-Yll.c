#include <stdio.h>
#define SIZE 25

int main(){
    // int chif0 = 14;
    // int chif1 = 14;
    // /*
    // .
    // .
    // .
    // .*/
    // int chif24 = 14;

    // double avg = (chif0 + chif1 +/*..... */ chif24) / 25.0;

    // /*Andere Möglichkeit*/

    // int chif[25] = {0}; 
    // /*       | */
    // /*   index */

    // for (int i = 0; i < 25; i++)
    // {
    //     chif[i] = 25 - i;
    // }
    /*-------------------------------------------------------------*/
    /*                         BUBBLE SORT                       */

    int Chif[SIZE] = {0};
    int helpy = 0;

    //Füllen von Array
    for (int i = 0; i < SIZE; i++)
    {
        Chif[i] = SIZE - i;
    }
    //Ausgeben von Array
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ",Chif[i]);
    }
    printf("\n");
    //Sortieren von Array

    for (int i = 0; i < SIZE; i++)
    {   
       helpy = Chif[i];
       Chif[i] = Chif[i + 1]; 
       Chif[i + 1] = helpy;
    }
    printf("\n");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ",Chif[i]);
    }
    
    return 0;
}