#include <stdio.h>
#define GST 0.16
#define DISCOUNT 0.10
#define DISCOUNT_BIG 0.20

int main () {

int choice;
float price = 0.0f;
int quantity = 0;
float total = 0.0f;
float gstAmount = 0.0f;
float discount = 0.0f;
int total_without_discount = 0;


printf("-----------------------------------------------------------------\n");
printf("                      TWENTY'S SUPERMARKET                        \n");
printf("-----------------------------------------------------------------\n");

printf("           2-38-383 , Potheri Market , Chennai - 603203           \n");
printf("                    Telephone no : +91 9558494849                      \n");
printf("                  Email : penguinisreal5@gmail.com                  \n");

printf("----------------------------------------------------------------\n");
printf("                              MENU                              \n");
printf("----------------------------------------------------------------\n");
printf("Please enter the choice of ur item that u want to buy from our supermarket :\n");
printf("----------------------------------------------------------------\n");
printf("             1.        BLUE LAYS --   Rs . 20.00                        \n");
printf("             2.        RED LAYS --    Rs . 20.00                         \n");
printf("             3.        KURKURE --     Rs . 20.00                          \n");
printf("             4.        MANGO JUICE -- Rs . 40.00                      \n");
printf("             5.        ORANGE JUICE --Rs . 40.00                     \n");   
printf("             6.        APPLE JUICE -- Rs . 20.00                      \n");
printf("             7.     CHOCOLATE BAR --  Rs . 30.00                    \n");
printf("             8.        CANDY --       Rs . 10.00                             \n");
printf("             9.        GUMMIES --     Rs . 5.00                          \n");    
printf("-----------------------------------------------------------------\n");

printf("What is the item code of the item that u want to buy from our supermarket (1-9) : ");
scanf("%d" , &choice);

printf("How much quantity do u want of that item : ");
scanf("%d" , &quantity);

if (quantity <= 0) {
    printf("Items cannot be negative ! ");
    return 1;
}
else if (quantity > 100) {
    printf("Sorry we cannot process orders of more than 100 items ! \n");
    printf("Party ??");
    return 1;
}
else if (quantity < 0) {
    printf("Quantity cannot be negative ! ");
    return 1;
}

switch(choice) {

    case 1: price =20; 
    break;

    case 2: price =20;
    break;

    case 3: price =20;
    break;

    case 4: price =40;
    break;

    case 5: price =40;
    break;

    case 6: price =20;
    break;

    case 7: price =30;
    break;

    case 8: price =10;
    break;

    case 9: price =5;
    break;

    default:
    printf("Please enter a valid number that matches with the menu given above ! ");
    
    return 1;
}

total = price * quantity;

gstAmount = total * GST;

total_without_discount = total + gstAmount;

discount = (total > 499) ? total * DISCOUNT_BIG :
           (total > 299) ? total * DISCOUNT : 0;

total = total + gstAmount - discount;

printf("-----------------------------------------------------\n");
printf("                    BILL DETAILS           \n");
printf("-----------------------------------------------------\n");
printf("              Item code : %d\n" , choice);
printf("             Quantity : %d\n" , quantity);
printf("             Price per item : Rs. %.2f\n" , price);
printf("             GST Amount : Rs. %.2f\n" , gstAmount);
printf("             Total amount without discount : Rs. %d\n" , total_without_discount);
printf("             Discount : Rs. %.2f\n" , discount);
printf("             Total Amount to be paid : Rs. %.2f\n" , total);
printf("-----------------------------------------------------\n"); 

printf("----------------------------------------------------\n");
printf("        Yayyyy !! Your order is successful ! \n");
printf("----------------------------------------------------\n");

printf("----------------------------------------------------\n");
printf("            You saved Rs %.2f on this order ! \n" , discount);
printf("----------------------------------------------------\n");

printf("----------------------------------------------------\n");
printf("                 Thanks for shopping with us ! \n");
printf("                         Visit again ! \n");
printf("----------------------------------------------------\n");

    return 0;
}