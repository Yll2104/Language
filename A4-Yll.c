#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UL -32
#define LL 32

int main(){
    double Feld[24];

    for(int i = 0; i < 24; i++){
        Feld[i] = (double)(rand() % (UL - LL + 1) + LL);
        if(i % 8 == 0){
            printf("\n");
        }
        printf("%.2lf  ", Feld[i]);
    }
    return 0;
}