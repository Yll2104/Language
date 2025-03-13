#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UL 40
#define LL 10
int main(){
    srand(time(NULL));

    int Feld[30] = {0};

    for(int i = 0; i < 30; i++){
        Feld[i] = (rand() % (UL - LL + 1)) + LL;
        if(i % 6 == 0){
            printf("\n");
        }
        printf("%d ", Feld[i]);
    }
    return 0;
}