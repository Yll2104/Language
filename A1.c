#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ul 40
#define ll 10
int main(){
    srand(time(NULL));

    int array[30] = {0};

    for(int i = 0; i < 30; i++){
        array[i] = (rand() % (ul - ll + 1)) + ll;
        if(i % 6 == 0){
            printf("\n");
        }
        printf("%d ", array[i]);
    }
    return 0;
}