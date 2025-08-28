#include <stdio.h>
int main () {

char item[40] = "";
float price = 0.0f;
int quantity = 0;
int currency = 0;
float total = 0.0f;


printf("What item would you like to buy from our supermarket : ");
scanf("%s" , &item);
   
printf("What is the price of one item ? (tell me real price hehe) $");
scanf("%f" , &price);
 
printf("How many items would you like to buy of that type ?");
scanf("%d" , &quantity);

total = price * quantity;

printf("The total cost of your ordered %d %s is  $%.2f" , quantity , item , total);











    return 0;
}