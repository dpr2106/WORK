#include <stdio.h>
int main (){



int choice;
int amount;
int balance = 10000;
int pin = 9654;
int current_pin_input;
int new_pin;


while(1) {

printf("                    State Bank Of India            \n ");
printf("             Choose the service you want to use :         \n");
printf("                    1. Cash Withdrawal          \n");
printf("                    2. Cash Deposit             \n");           
printf("                    3. Balance Enquiry          \n");
printf("                    4. Change PIN \n");
printf("                    5. Exit \n");



printf("Enter your choice (1-5) : ");
scanf("%d" , &choice);

switch (choice) {
    case 1:
        int amount;
        printf("Enter the amount you want to withdraw: \n");
        scanf("%d" , &amount);
        if (amount >= balance || amount < 0) {
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
        if (deposit <= 0) {
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
        printf("Enter your current PIN: ");
                scanf("%d", &current_pin_input); 
                if (current_pin_input != pin) { 
                    printf("Incorrect PIN! Please try again.\n");
                } else {
                    printf("Enter your new PIN: ");
                    scanf("%d", &new_pin);
                    if (new_pin < 1000 || new_pin > 9999) {
                        printf("A PIN is always a four-digit number. Please enter a 4-digit PIN.\n");
                    } else {
                        pin = new_pin; 
                        printf("Your PIN has been successfully changed.\n");
                    }
                }
                break;
    case 5:
        printf("              Thanks for doing payments with SBI.             \n");
        printf("                    Aapka din shubh ho !!                  ");
        return 0;

    }

}

        

}















