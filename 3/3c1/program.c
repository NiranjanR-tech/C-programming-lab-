#include <stdio.h>
int main() {
    int studentID;
    char studentName[50];
    int totalWorkingDays, daysPresent;
    float attendancePercentage;
    char medicalCertificate;
    printf("\n******** ATTENDANCE MANAGEMENT MODULE ********\n");
    printf("\nEnter Student ID : ");
    scanf("%d", &studentID);
    printf("Enter Student Name : ");
    scanf(" %s", studentName);
    printf("Enter Total Working Days : ");
    scanf("%d", &totalWorkingDays);
    printf("Enter Days Present : ");
    scanf("%d", &daysPresent);
    attendancePercentage = (daysPresent * 100.0) / totalWorkingDays;
    printf("\n\n******** STUDENT ATTENDANCE DETAILS ********\n");
    printf("\nStudent ID : %d", studentID);
    printf("\nStudent Name : %s", studentName);
    printf("\nAttendance Percentage : %.2f%%", attendancePercentage);
    if (attendancePercentage >= 90)
        printf("\nAttendance Category : Excellent Attendance");
    else if (attendancePercentage >= 75)
        printf("\nAttendance Category : Good Attendance");
    else if (attendancePercentage >= 60)
        printf("\nAttendance Category : Average Attendance");
    else
        printf("\nAttendance Category : Poor Attendance");
    if (attendancePercentage >= 75) {
        printf("\nStatus : Eligible for Examination");
    } else {
        printf("\nMedical Certificate (Y/N) : ");
        scanf(" %c", &medicalCertificate);
        if (medicalCertificate == 'Y' || medicalCertificate == 'y') {
            printf("Status : Eligible for Condonation Approval");
        } else {
            printf("Status : Not Eligible for Examination");
        }
    }
    printf("\n\n***********************************************\n");
    return 0;
}
