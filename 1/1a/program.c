#include <stdio.h>
int main() {
    int patientID;
    char name[30];
    float consultationFee, testFee, medicineCost;
    float totalBill;
    printf("Enter Patient ID : ");
    scanf("%d", &patientID);
    printf("Enter Patient Name : ");
    scanf("%s", name);
    printf("Enter Consultation Fee : ");
    scanf("%f", &consultationFee);
    printf("Enter Test Fee : ");
    scanf("%f", &testFee);
    printf("Enter Medicine Cost : ");
    scanf("%f", &medicineCost);
    totalBill = consultationFee + testFee + medicineCost;
    printf("\n========= PATIENT BILL RECEIPT =========\n");
    printf("Patient ID       : %d\n", patientID);
    printf("Patient Name     : %s\n", name);
    printf("Consultation Fee : Rs. %.2f\n", consultationFee);
    printf("Test Fee         : Rs. %.2f\n", testFee);
    printf("Medicine Cost    : Rs. %.2f\n", medicineCost);
    printf("------------------------------------------\n");
    printf("Total Bill       : Rs. %.2f\n", totalBill);
    return 0;
}
