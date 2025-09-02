#include <stdio.h>
int main() {
    int number = 0;
    printf("Enter a number for which u want to check even or odd : ");
    scanf("%d" , &number);

    if (number % 2 == 0) {
        printf("Your number is even \n");
    } else {
        printf("Your number is odd \n");
    }








    return 0;
}