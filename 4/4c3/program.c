#include <stdio.h>
int main() {
    int studentID, semester, count = 0, i;
    char choice;
    char studentName[50];
    char courseName[10][50];
    printf("\n******** COURSE REGISTRATION ********\n");
    printf("\nEnter Student ID : ");
    scanf("%d", &studentID);
    printf("Enter Student Name : ");
    scanf(" %s", studentName);
    printf("Enter Semester : ");
    scanf("%d", &semester);
    do {
        printf("\nEnter Course %d : ", count + 1);
        scanf(" %s", courseName[count]);
        count++;
        printf("Do you want to add another course? (Y/N) : ");
        scanf(" %c", &choice);
    } while (choice == 'Y' || choice == 'y');
    printf("\n\n******** REGISTERED COURSES ********\n");
    printf("\nStudent ID : %d", studentID);
    printf("\nStudent Name : %s", studentName);
    printf("\nSemester : %d", semester);
    printf("\n\nRegistered Courses\n");
    for (i = 0; i < count; i++) {
        printf("%d. %s\n", i + 1, courseName[i]);
    }
    printf("\nTotal Courses Registered : %d", count);
    return 0;
}
