#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UL 122  
#define LL 97   

int main(){
    srand(time(NULL));

    char Feld[20];

    for(int i = 0; i < 20; i++){
        Feld[i] = (char)(rand() % (UL - LL + 1) + LL);
        if(i % 5 == 0){
            printf("\n");
        }
        printf("%c ", Feld[i]);
    }
    return 0;
}