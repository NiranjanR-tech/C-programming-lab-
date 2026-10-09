#include <stdio.h>
int main() {
    int i = 1, n;
    float expense, total = 0, average;
    printf("Enter Number of Travelers: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("Enter Expense of Traveler %d: ", i);
        scanf("%f", &expense);
        total += expense;
        i++;
    }
    average = total / n;
    printf("\nTotal Travel Expense : Rs. %.2f", total);
    printf("\nAverage Expense : Rs. %.2f", average);
    return 0;
}
