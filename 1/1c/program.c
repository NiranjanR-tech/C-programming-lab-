#include <stdio.h>
int main() {
    int studentID, yearOfStudy;
    char name[40], department[30], section[10];
    char email[50], mobile[15];
    printf("Enter Student ID : ");
    scanf("%d", &studentID);
    printf("Enter Student Name : ");
    scanf(" %[^\n]", name);
    printf("Enter Department : ");
    scanf(" %s", department);
    printf("Enter Year of Study : ");
    scanf("%d", &yearOfStudy);
    printf("Enter Section : ");
    scanf(" %s", section);
    printf("Enter Email ID : ");
    scanf(" %s", email);
    printf("Enter Mobile Number : ");
    scanf(" %s", mobile);
    printf("\n========= STUDENT REGISTRATION DETAILS =========\n");
    printf("Student ID   : %d\n", studentID);
    printf("Student Name : %s\n", name);
    printf("Department   : %s\n", department);
    printf("Year of Study: %d\n", yearOfStudy);
    printf("Section      : %s\n", section);
    printf("Email ID     : %s\n", email);
    printf("Mobile Number: %s\n", mobile);
    return 0;
}
