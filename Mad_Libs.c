#include <stdio.h>
#include<string.h>
int main() {

char noun[40] = "";
char verb[20] = "";
char adjective[20] = "";
char adjective1[20] = "";
char adjective2[20] = "";


printf("Enter an adjective : (descriptive word) ");
scanf("%s" , &adjective);
printf("%s\n" , adjective);

printf("Enter a noun : (person, place or thing) ");
scanf("%s" , &noun);

printf("Enter an adjective : ");
scanf("%s" , &adjective1);

printf("Enter a verb :  (ending with -ing)");
scanf("%s" , &verb);

printf("Enter an adjective :");
scanf("%s" , &adjective2);


printf("\nToday  was feeling very %s \n" , adjective);









    return 0;
}