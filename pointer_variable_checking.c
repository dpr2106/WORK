#include <stdio.h>
int main() {

int price = 25;
int *p = &price;
int quantity = 5;
int *q = &quantity;
printf("The location of this variable is %p and the location of the second variable is %p\n" , p , q);

    return 0;
}