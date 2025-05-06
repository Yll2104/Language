    #include <stdio.h>
    #include <math.h>

    char getChoice();
    int getAlter();
    int humanToCat(int alter);
    int humanToDog(int alter);

    int main()
    {

        char choice = getChoice();
        int alter = getAlter();
        int result = 0;

        if (choice == 'h') {
            result = humanToDog(alter);
            printf("In Hundejahren bist du %d alt.\n", result);
        } else if (choice == 'k') {
            result = humanToCat(alter);
            printf("In Katzenjahren bist du %d alt.\n", result);
        } else {
            printf("Ungültige Eingabe.\n");
        }
        return 0;
    }

    char getChoice()
    {
        char choice = ' ';

        printf("Hund oder Katze? (h || k): ");
        scanf(" %c", &choice);

        return choice;
    }

    int getAlter()
    {
        int alter = 0;

        printf("Gib dein Alter ein: ");
        scanf("%d", &alter);
        return alter;
    }

    int humanToCat(int alter){

        return  24 + (alter - 2) * 4;
    }
    int humanToDog(int alter){

        return  (int)(16 * log(alter) + 31);
        
    }