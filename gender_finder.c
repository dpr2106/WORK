#include <stdio.h>
#include <string.h>
int main() {

char a[10];
printf("Enter a gender :");
scanf("%s", a);
while (strcmp(a, "male") == 0 || strcmp(a, "female") == 0 ||
           strcmp(a, "Male") == 0 || strcmp(a, "Female") == 0) {
    printf("You are a %s\n", a);
    printf("Again tell me ur gender :");
    scanf("%s", a);
}
printf("Enter a valid gender :\n");
scanf("%s", &a);
    return 0;
}