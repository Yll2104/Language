#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ll -32
#define ul 32

int main(){
    double array[24];

    for(int i = 0; i < 24; i++){
        array[i] = (double)(rand() % (ul - ll + 1) + ll);
        if(i % 8 == 0){
            printf("\n");
        }
        printf("%.2lf  ", array[i]);
    }
    return 0;
}