#include <stdio.h>
int main(){
    
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    if (number > 0) {
        printf("You entered a positive number: %.2f\n", number);
    }
    else if (number < 0) {
        printf("You entered a negative number: %.2f\n", number);
    }




    return 0;
}