#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ul 122  
#define ll 97   

int main(){
    srand(time(NULL));

    char array[20];

    for(int i = 0; i < 20; i++){
        array[i] = (char)(rand() % (ul - ll + 1) + ll);
        if(i % 5 == 0){
            printf("\n");
        }
        printf("%c ", array[i]);
    }
    return 0;
}