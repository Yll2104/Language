#include <stdio.h>

int main(){
    int Feld[20] = {0};
    int n = 0;

    
    do{
        printf("Enter number of values per line [2 < number < 6]: ");
        scanf("%d", &n);
    } while(n < 2 && n > 6);

    
    for(int i = 0; i < 20; i++){
        Feld[i] = (i + 1) * 4;
        
        if(i % n == 0){
            printf("\n");
        } 
            printf("%d ", Feld[i]);
    }
    return 0;
}