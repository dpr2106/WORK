#include <stdio.h>
int main (){

printf("                    State Bank Of India            \n ");
printf("Choose the service you want to use : \n");
printf("1. Cash Withdrawal \n");
printf("2. Cash Deposit \n");           
printf("3. Balance Enquiry \n");
printf("4. Change PIN \n");
printf("5. Exit \n");

int choice;
scanf("%d" , &choice);

balance = 10000;

switch (choice) {
    case 1:
        int amount;
        printf("Enter the amount you want to withdraw: \n");
        scanf("%d" , &amount);
        printf("Please collect your cash of amount %d \n", amount);
        break;
    case 2:
        int deposit;
        printf("Enter the amount you want to deposit: \n");
        scanf("%d" , &deposit);
        printf("You have successfully deposited %d \n", deposit);
        break;
    case 3:



        






}






    return 0;
}