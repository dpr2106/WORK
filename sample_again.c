#include <stdio.h>
int main()
// This program is my first program! :)
// Yeah I am a beginner type of programmer and very new to C Programming Languaage
{ 
    int no_of_apples = 0;
    float quantity = 0.0f;
    char name[39] = "";
    char quality = '\0';

    printf("Enter the number of apples you bought: ");
    scanf("%d", &no_of_apples);
    printf("You bought %d apples.\n", no_of_apples);

    printf("Enter the quantity of apples in kg: ");
    scanf("%f", &quantity);
    printf("Quantity of apples: %.2f kg\n", quantity);

    printf("Enter the name of the Buyer: ");
    scanf("%s", name);
    printf("Name of the Buyer: %s\n", name);

    return 0;
}
