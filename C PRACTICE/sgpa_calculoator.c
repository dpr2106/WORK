#include <stdio.h>
int main(void) {
float g1, g2, g3; // grade points for 3 subjects (0 to 10)
int c1, c2, c3; // credits for 3 subjects
float weighted_sum, sgpa;
int total_credits;
printf("Enter grade point and credit for Subject 1 (e.g., 9 4): ");
scanf("%f %d", &g1, &c1);
printf("Enter grade point and credit for Subject 2 (e.g., 8 3): ");
scanf("%f %d", &g2, &c2);
printf("Enter grade point and credit for Subject 3 (e.g., 7 3): ");
scanf("%f %d", &g3, &c3);
total_credits = c1 + c2 + c3;
if (total_credits <= 0) {
printf("Total credits must be positive.\n");
return 0;
}
weighted_sum = g1 * c1 + g2 * c2 + g3 * c3;
sgpa = weighted_sum / total_credits;
printf("\nSGPA = %.2f\n", sgpa);
if (sgpa >= 8.0f) {
printf("Grade: Distinction\n");
} else if (sgpa >= 7.0f) {
printf("Grade: First Class\n");
} else if (sgpa >= 6.0f) {
printf("Grade: Second Class\n");
} else if (sgpa >= 5.0f) {
printf("Grade: Third Class\n");
} else {
printf("Grade: Not Qualified\n");
}
return 0;
}