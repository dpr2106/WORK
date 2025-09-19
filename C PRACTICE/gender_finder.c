#include <stdio.h>
#include <string.h>
int main() {

char a[10];
while(1) {
printf("Enter a gender :");
scanf("%s", a);
while (strcmp(a, "male") == 0 || strcmp(a, "female") == 0 ||
           strcmp(a, "Male") == 0 || strcmp(a, "Female") == 0) {
    printf("You are a %s\n", a);
    printf("Again tell me ur gender :");
    scanf("%s", a);
}
    printf("Fucking enter a valid gender !\n");
}
    return 0;
}