#include <stdio.h>
int main() {
    float transport, hotel, food, total;
    char choice;
    do {
        printf("\nEnter Transport Cost: ");
        scanf("%f", &transport);
        printf("Enter Hotel Cost: ");
        scanf("%f", &hotel);
        printf("Enter Food Cost: ");
        scanf("%f", &food);
        total = transport + hotel + food;
        printf("Total Trip Expense : Rs. %.2f\n", total);
        printf("\nDo you want to calculate another trip? (Y/N): ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    printf("\nThank You for Using Smart Travel Planner.");
    return 0;
}
