#include <stdio.h>
int main() {
    int n, i;
    float temp, threshold;
    printf("Enter Number of Days to Monitor : ");
    scanf("%d", &n);
    printf("Enter Fever Alert Threshold (C) : ");
    scanf("%f", &threshold);
    for (i = 1; i <= n; i++) {
        printf("Enter Temperature for Day %d (-1 if reading missing) : ", i);
        scanf("%f", &temp);
        if (temp == -1) {
            continue;
        }
        printf("Day %d Temperature : %.1f C\n", i, temp);
        if (temp >= threshold) {
            printf("ALERT: Fever threshold exceeded on Day %d! Stopping monitoring.\n", i);
            break;
        }
    }
    return 0;
}
