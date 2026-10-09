#include <stdio.h>
int main() {
    int studentID, semester, numberOfCourses, i;
    char studentName[50];
    char courseName[10][50];
    printf("\n******** COURSE REGISTRATION ********\n");
    printf("\nEnter Student ID : ");
    scanf("%d", &studentID);
    printf("Enter Student Name : ");
    scanf(" %s", studentName);
    printf("Enter Semester : ");
    scanf("%d", &semester);
    printf("Enter Number of Courses : ");
    scanf("%d", &numberOfCourses);
    for (i = 0; i < numberOfCourses; i++) {
        printf("Enter Course %d : ", i + 1);
        scanf(" %s", courseName[i]);
    }
    printf("\n\n******** REGISTERED COURSES ********\n");
    printf("\nStudent ID : %d", studentID);
    printf("\nStudent Name : %s", studentName);
    printf("\nSemester : %d", semester);
    printf("\n\nRegistered Courses\n");
    for (i = 0; i < numberOfCourses; i++) {
        printf("%d. %s\n", i + 1, courseName[i]);
    }
    printf("\n****************************************");
    return 0;
}
