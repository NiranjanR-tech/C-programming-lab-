#include <stdio.h>
int main() {
    int studentID;
    char studentName[50];
    double tuitionFee, examinationFee, libraryFee, laboratoryFee, paidAmount;
    float gstRate = 18.0;
    double gstAmount, totalFee, balanceFee;
    printf("\n********** FEE MANAGEMENT MODULE **********\n");
    printf("\nEnter Student ID : ");
    scanf("%d", &studentID);
    printf("Enter Student Name : ");
    scanf(" %s", studentName);
    printf("Enter Tuition Fee : ");
    scanf("%lf", &tuitionFee);
    printf("Enter Examination Fee : ");
    scanf("%lf", &examinationFee);
    printf("Enter Library Fee : ");
    scanf("%lf", &libraryFee);
    printf("Enter Laboratory Fee : ");
    scanf("%lf", &laboratoryFee);
    printf("Enter Paid Amount : ");
    scanf("%lf", &paidAmount);
    gstAmount = (examinationFee * gstRate) / 100;
    totalFee = tuitionFee + examinationFee + libraryFee + laboratoryFee + gstAmount;
    balanceFee = totalFee - paidAmount;
    printf("\n\n********** STUDENT FEE DETAILS **********\n");
    printf("\nStudent ID     : %d", studentID);
    printf("\nStudent Name   : %s", studentName);
    printf("\nGST Rate       : %.2f%%", gstRate);
    printf("\nGST Amount     : %.2lf", gstAmount);
    printf("\nTotal Fee      : %.2lf", totalFee);
    printf("\nPaid Amount    : %.2lf", paidAmount);
    printf("\nBalance Fee    : %.2lf", balanceFee);
    printf("\n\n*******************************************\n");
    return 0;
}
