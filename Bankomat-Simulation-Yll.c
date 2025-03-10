#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int LogIn();
int bankAccount();
int createAccount();

int main() {
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("       Welcome to Yll&Tobis Cooperation Bank       \n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    int userChoice = 0;

    do {
        printf("\nWhat do you want to do?\n");
        printf("[1] Log In\n");
        printf("[2] View Bank Account\n");
        printf("[3] Create new account\n");
        printf("[4] Exit\n");
        printf("Enter your choice: ");
        
        if (scanf("%d", &userChoice) != 1) {  
            printf("Invalid input! Please enter a number.\n");
            while (getchar() != '\n');  // Clear input buffer
            continue;
        }

        switch (userChoice) {
            case 1:
                printf("Logging in...\n");
                LogIn();
                break;
            case 2:
                printf("Viewing bank account...\n");
                bankAccount();
                break;
            case 3:
                printf("Creating a new account...\n");
                createAccount();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }

        // Pause before showing the menu again
        if (userChoice != 4) {
            printf("\nPress Enter to continue...");
            while (getchar() != '\n');  // Clear buffer
            getchar();  // Wait for Enter
        }

    } while (userChoice != 4); 

    return 0;
}

int LogIn() {
    printf("Welcome to login\n");
    return 0;
}

int bankAccount() {
    printf("Welcome to bank account\n");
    return 0;
}

int createAccount() {
    printf("Welcome to create account\n");
    return 0;
}
