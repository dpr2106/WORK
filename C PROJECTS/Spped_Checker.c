#include <stdio.h>

#define LIMIT 80
#define MAX_SPEED 140

void get_speeds(int n, int speeds[]) {
    printf("Enter speeds of %d vehicles:\n", n);
    int val, i = 0;
    while(i < n) {
        printf("Vehicle %d speed: ", i+1);
        scanf("%d", &val);
        while(val < 0 || val > MAX_SPEED) {
            if(val < 0)
                printf("Negative speed can not be existed!\nPlease re-enter the value of the %d vehicle: ", i+1);
            else if(val > MAX_SPEED)
                printf("Speed cannot exceed %d km/h for a delivery vehicle!\nPlease re-enter the value of the %d vehicle: ", MAX_SPEED, i+1);
            scanf("%d", &val);
        }
        speeds[i] = val;
        i++;
    }
}
int list_violations(int n, int speeds[], int overspeed[]) {
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(speeds[i] > LIMIT) {
            overspeed[count] = i + 1;
            count++;
        }
    }
    return count; 
}
double compute_average(int n, int speeds[]) {
    int sum = 0;
    for(int i = 0; i < n; i++)
        sum += speeds[i];
    return n > 0 ? (double)sum / n : 0.0;
}
int main() {
    int n;
    printf("===============================================\n");
    printf("How many vehicles? ");
    scanf("%d", &n);
    printf("===============================================\n");
    int speeds[n], overspeed[n];
    get_speeds(n, speeds);
    double avg = compute_average(n, speeds);
    int violations = list_violations(n, speeds, overspeed);
    printf("\nAverage speed: %.2f km/h\n", avg);
    printf("Number of vehicles exceeding %d km/h: %d\n", LIMIT, violations);
    if(violations == 0) {
        printf("\n");
    } else {
        printf("Overspeed vehicle numbers: ");
        for(int i = 0; i < violations; i++)
            printf("%d ", overspeed[i]);
        printf("\n");
    }
    return 0;
}
