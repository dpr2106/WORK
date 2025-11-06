#include <stdio.h>

#define LIMIT 80
void get_speeds(int n, int speeds[]) {
    printf("Enter speeds of %d vehicles:\n", n);
    int val, i = 0;
    while(i < n) {
        printf("Vehicle %d speed: ", i+1);
        scanf("%d", &val);
        while(val < 0) {
            printf("Negative speed can not be existed!\nPlease re-enter the value of the %d vehicle: ", i+1);
            scanf("%d", &val);
        }
        speeds[i] = val;
        i++;
    }
}
double compute_average(int n, int speeds[]) {
    int sum = 0, i;
    for(i = 0; i < n; i++)
        sum += speeds[i];
    return n > 0 ? (double)sum/n : 0.0;
}
int count_violations(int n, int speeds[]) {
    int count = 0, i;
    for(i = 0; i < n; i++)
        if(speeds[i] > LIMIT) count++;
    return count;
}
int main() {
    int n;
    printf("===============================================\n");
    printf("How many vehicles? ");
    scanf("%d", &n);
    printf("===============================================");
    int speeds[n];
    get_speeds(n, speeds);
    double avg = compute_average(n, speeds);
    int violations = count_violations(n, speeds);
    printf("\nAverage speed: %.2f km/h\n", avg);
    printf("Number of vehicles exceeding %d km/h: %d\n", LIMIT, violations);
    printf("\n(If all speeds are below %d, violation count will be zero.)\n", LIMIT);
    if(violations == 0) {
        printf("\nYayy! You are safe. All drivers followed the rules and nobody sped today. Great job!\n");
    } else {
        printf("\nSome vehicles exceeded the safe speed limit. Stay alert and drive safe!\n");
    }
    return 0;
}
