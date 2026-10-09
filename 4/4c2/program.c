#include <stdio.h>
int main() {
    int studentID, semester, maximumCredits;
    int count = 0, totalCredits = 0, i;
    char studentName[50];
    char courseName[10][50];
    int courseCredits[10];
    printf("\n******** COURSE REGISTRATION ********\n");
    printf("\nEnter Student ID : ");
    scanf("%d", &studentID);
    printf("Enter Student Name : ");
    scanf(" %s", studentName);
    printf("Enter Semester : ");
    scanf("%d", &semester);
    printf("Enter Maximum Credit Limit : ");
    scanf("%d", &maximumCredits);
    while (totalCredits < maximumCredits) {
        printf("\nEnter Course %d : ", count + 1);
        scanf(" %s", courseName[count]);
        printf("Enter Course Credits : ");
        scanf("%d", &courseCredits[count]);
        if (totalCredits + courseCredits[count] > maximumCredits) {
            printf("\n\nCannot register this course.");
            printf("\nCredit limit will exceed %d.\n", maximumCredits);
            break;
        }
        totalCredits = totalCredits + courseCredits[count];
        count++;
    }
    printf("\n\n******** REGISTERED COURSES ********\n");
    printf("\nStudent ID : %d", studentID);
    printf("\nStudent Name : %s", studentName);
    printf("\nSemester : %d", semester);
    printf("\n\nRegistered Courses\n\n");
    for (i = 0; i < count; i++) {
        printf("%d. %-25s %2d Credits\n", i + 1, courseName[i], courseCredits[i]);
    }
    printf("\nTotal Registered Credits : %d", totalCredits);
    return 0;
}
