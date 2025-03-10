#include <stdio.h>

int main(){
    int Size;

    printf("Enter the size of the array: ");
    scanf("%d", &Size); //10

    int arr[Size]; //10
    int R_Arr[(Size + 1) / 2]; //5
    int L_Arr[Size / 2]; //5

    int m = Size / 2;

    for(int i = 0; i < Size; i++){
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < m; i++)
    {
        L_Arr[i] = arr[i];
    }

    for (int i = 0; i < m; i++)
    {
        R_Arr[i] = arr[i + m];
    }
    

    printf("The Left Array is: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", L_Arr[i]);
    }
    printf("\n");//sdfjkasödlfkj
    printf("The Right Array is: ");
    for (int i = 0; i < m; i++)
    {
        printf("%d ", R_Arr[i]);
    }
    
    return 0;
}