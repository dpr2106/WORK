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


printf("Enter a noun : (person, place or thing) ");
scanf("%s" , &noun);

printf("Enter an adjective : ");
scanf("%s" , &adjective1);

printf("Enter a verb :  (ending with -ing)");
scanf("%s" , &verb);

printf("Enter an adjective :");
scanf("%s" , &adjective2);


printf("\nToday %s was feeling very %s " , noun , adjective);
printf("\nAnd suddenly %s appeared to be %s and that's it ! \n" , noun , adjective1);
printf("Then %s started to %s \n" , noun , verb);










    return 0;
}