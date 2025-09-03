#include <stdio.h>
int main() {
    long long int n;
    char c [50];
    double bill = 0;
    printf("==============================\n");
    printf("      Electricity Bill\n");
    printf("==============================\n");
    printf("Enter customer number: ");
    fgets(c , sizeof(c) , stdin);
    printf("Enter units consumed: ");
    scanf("%d", &n);

    if (n <= 200) {
        bill = n * 1.5;
    } else if (n <= 400) {
        bill = 200 * 1.5 + (n - 200) * 2;
    } else if (n <= 500) {
        bill = 200 * 1.5 + 200 * 2 + (n - 400) * 3;
    } else {
        bill = 200 * 1.5 + 200 * 2 + 100 * 3 + (n - 500) * 4;
    }

    printf("\n------------------------------\n");
    printf("Customer Number : %s\n", c);
    printf("Units Consumed  : %d\n", n);
    printf("Total Bill      : Rs. %.2lf\n", bill);
    printf("------------------------------\n");
    return 0;
}