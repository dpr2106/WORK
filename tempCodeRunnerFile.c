#include <stdio.h>

int main() {
    int choice;

    // Print header
    printf("###########################################################\n");
    printf("Welcome!\n");
    printf("Please choose a number from the following options:\n");
    printf("1. Play the game!\n");
    printf("2. Demo the game!\n");
    printf("3. Exit\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n");

    // Take input
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Perform action based on choice
    switch(choice) {
        case 1:
            printf("Starting the game...\n");
            break;
        case 2:
            printf("Demo mode starting...\n");
            break;
        case 3:
            printf("Exiting... Goodbye!\n");
            break;
        default:
            printf("Invalid choice! Please restart and try again.\n");
    }

    return 0;
}
