#include <stdio.h>
int main() {
    char travelerName[30], destination[30];
    int numberOfDays;
    float transportCost, hotelCost, foodCost, totalTravelBudget;
    printf("Enter Traveler Name : ");
    scanf("%s", travelerName);
    printf("Enter Destination : ");
    scanf("%s", destination);
    printf("Enter Number of Travel Days : ");
    scanf("%d", &numberOfDays);
    printf("Enter Transport Cost : ");
    scanf("%f", &transportCost);
    printf("Enter Hotel Cost per Day : ");
    scanf("%f", &hotelCost);
    printf("Enter Food Cost per Day : ");
    scanf("%f", &foodCost);
    totalTravelBudget = transportCost + (hotelCost * numberOfDays)
        + (foodCost * numberOfDays);
    printf("\n========= TRAVEL BUDGET ESTIMATE =========\n");
    printf("Traveler Name : %s\n", travelerName);
    printf("Destination   : %s\n", destination);
    printf("Number of Days: %d\n", numberOfDays);
    printf("Total Estimated Travel Budget : Rs. %.2f\n", totalTravelBudget);
    return 0;
}
