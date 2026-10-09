#include <stdio.h>
int main() {
    float totalCost;
    printf("Enter Total Trip Cost: ");
    scanf("%f", &totalCost);
    if (totalCost <= 10000) {
        printf("\nTravel Category : Budget Package");
    } else if (totalCost <= 25000) {
        printf("\nTravel Category : Standard Package");
    } else {
        printf("\nTravel Category : Premium Package");
    }
    return 0;
}
