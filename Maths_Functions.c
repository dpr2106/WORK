#include <stdio.h>
#include <math.h>
int main() {

double x = 0.09;
printf("Enter a number for which u want to get the square root of :");
scanf("%lf" , &x);
x = sqrt(x);

printf("The square root of your entered number is : %.2lf" , x);


double y = 0.02;
printf("\nEnter the number which u want to be cubed (sorry for spelling) :");
scanf("%lf" , &y);
y = pow(y , 3);

printf("\nThe cubed value of your entered answer is : %.2lf" , y);








    return 0;
}