#include <stdio.h>
int main() {
    int patientID, ageInt;
    char name[30], gender;
    float weight;
    double roomChargePerDay;
    int daysAdmitted;
    double totalRoomBill;
    printf("Enter Patient ID : ");
    scanf("%d", &patientID);
    printf("Enter Patient Name : ");
    scanf("%s", name);
    printf("Enter Gender (M/F) : ");
    scanf(" %c", &gender);
    printf("Enter Age : ");
    scanf("%d", &ageInt);
    printf("Enter Weight (kg) : ");
    scanf("%f", &weight);
    printf("Enter Room Charge per Day : ");
    scanf("%lf", &roomChargePerDay);
    printf("Enter Number of Days Admitted : ");
    scanf("%d", &daysAdmitted);
    totalRoomBill = roomChargePerDay * (double) daysAdmitted;
    printf("\n========= PATIENT REGISTRATION RECORD =========\n");
    printf("Patient ID   : %d\n", patientID);
    printf("Name         : %s\n", name);
    printf("Gender       : %c\n", gender);
    printf("Age          : %d years\n", ageInt);
    printf("Weight       : %.1f kg\n", weight);
    printf("Days Admitted: %d\n", daysAdmitted);
    printf("Total Room Bill : Rs. %.2lf\n", totalRoomBill);
    return 0;
}
