#include <stdio.h>
int main() {
    int i, days;
    float transport, hotel, food;
    float dayExpense, totalExpense = 0;
    printf("Enter Number of Travel Days: ");
    scanf("%d", &days);
    for (i = 1; i <= days; i++) {
        printf("\nDay %d\n", i);
        printf("Enter Transport Expense: ");
        scanf("%f", &transport);
        printf("Enter Hotel Expense: ");
        scanf("%f", &hotel);
        printf("Enter Food Expense: ");
        scanf("%f", &food);
        dayExpense = transport + hotel + food;
        totalExpense += dayExpense;
        printf("Day %d Expense : Rs. %.2f\n", i, dayExpense);
    }
    printf("\nOverall Trip Expense : Rs. %.2f", totalExpense);
    return 0;
}
