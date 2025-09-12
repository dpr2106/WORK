#include <stdio.h>
int main (){

printf("                    State Bank Of India            \n ");
printf("             Choose the service you want to use :         \n");
printf("                    1. Cash Withdrawal          \n");
printf("                    2. Cash Deposit             \n");           
printf("                    3. Balance Enquiry          \n");
printf("                    4. Change PIN \n");
printf("                    5. Exit \n");

int choice;
int amount;
int balance = 10000;
int pin;
printf("Enter your choice (1-5) : ");
scanf("%d" , &choice);

switch (choice) {
    case 1:
        int amount;
        printf("Enter the amount you want to withdraw: \n");
        scanf("%d" , &amount);
        if (amount > balance || amount < 0) {
            printf("Invalid amount !");
            return 1;
        }
        balance -= amount;
        printf("Please collect your cash of amount %d \n", amount);
        break;
    case 2:
        int deposit;
        printf("Enter the amount you want to deposit:");
        scanf("%d" , &deposit);
        if (deposit < 0) {
            printf("Bro just add some money bro !!");
            return 1;
        }
        balance += deposit;
        printf("You have successfully deposited %d \n", deposit);
        break;
    case 3:
        printf("Your current balance is %d \n", balance);
        break;  
    case 4:
        int new_pin;    
        printf("Enter your current PIN: \n");
        scanf("%d" , &pin);
        if (pin != 9654) {
            printf("Incorrect PIN! \n");
            return 1;
        }
        printf("Enter your new PIN :");
        scanf("%d" , &new_pin);
        if (new_pin < 1000 || new_pin > 9999) {
            printf("A pin is always a four digit number , so please enter a 4 digit pin :\n");
            return 1;
        }
        pin = new_pin;
        printf("Your PIN has been successfully changed.");
        break;
    case 5:
        printf("              Thanks for doing payments with SBI.             \n");
        printf("                    Aapka din shubh ho !!                  ");
        break;





        






}






    return 0;
}



