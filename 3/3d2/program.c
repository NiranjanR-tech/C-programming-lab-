#include <stdio.h>
int main() {
    int choice;
    printf("Select Mode of Transport\n");
    printf("1. Bus\n2. Train\n3. Flight\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("\nMode of Transport : Bus");    printf("\nFare : Rs.800");  break;
        case 2: printf("\nMode of Transport : Train");  printf("\nFare : Rs.1500"); break;
        case 3: printf("\nMode of Transport : Flight"); printf("\nFare : Rs.6000"); break;
        default: printf("\nInvalid Choice");
    }
    return 0;
}
