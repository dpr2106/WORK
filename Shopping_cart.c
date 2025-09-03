#include <stdio.h>
int main () {

char item[40] = "";
float price = 0.0f;
int quantity = 0;
int currency = 0;
float total = 0.0f;

printf("-----------------------------------------------------------------\n");
printf("                      BIG SAVE SUPERMARKET                        \n");
printf("-----------------------------------------------------------------\n");

printf("           2-38-383 , Potheri Market , Chennai - 603203           \n");
printf("                    Telephone no : +91 9558494849                      \n");
printf("                  Email : penguinisreal5@gmail.com                  \n");

printf("----------------------------------------------------------------\n");
printf("                              MENU                              \n");
printf("----------------------------------------------------------------\n");
printf("                     BLUE LAYS --   Rs . 20.00                        \n");
printf("                     RED LAYS --    Rs . 20.00                         \n");
printf("                     KURKURE --     Rs . 15.00                          \n");
printf("                     MANGO JUICE -- Rs . 25.00                      \n");
printf("                     ORANGE JUICE --Rs . 25.00                     \n");   
printf("                     APPLE JUICE -- Rs . 30.00                      \n");
printf("                  CHOCOLATE BAR --  Rs . 10.00                    \n");
printf("                     CANDY --       Rs .  5.00                             \n");
printf("                     GUMMIES --     Rs . 15.00                          \n");    
printf("-----------------------------------------------------------------\n");



printf("What items would you like to buy from our supermarket : ");
fgets(item , sizeof(item) , stdin);

if (item[0] == '\0') {
    printf("Error: Item name cannot be empty.\n");
    return 1;
}

printf("What is the price of one item ?  $   \n");
scanf("%f", &price);
if (price <= 0.0f) {
    printf("Error: Price must be greater than 0.\n");
    return 1;
}

printf("How many items would you like to buy of that type ?\n");
scanf("%d", &quantity);
if (quantity <= 0) {
    printf("Error: Quantity must be a positive integer.\n");
    return 1;
}

total = price * quantity;

printf("The total cost of your ordered %d %s is  $%.2f", quantity, item, total);











    return 0;
}