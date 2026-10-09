#include <stdio.h>
int main() {
    int studentID, semester, choice;
    char studentName[50], department[30];
    printf("\n========== STUDENT DASHBOARD ==========\n");
    printf("\nEnter Student ID : ");
    scanf("%d", &studentID);
    printf("Enter Student Name : ");
    scanf(" %s", studentName);
    printf("Enter Department : ");
    scanf(" %s", department);
    printf("Enter Semester : ");
    scanf("%d", &semester);
    printf("\n========== DASHBOARD MENU ==========\n");
    printf("1. Student Profile\n2. Course Details\n3. Fee Details\n");
    printf("4. Attendance Details\n5. Examination Details\n6. Logout\n");
    printf("\nEnter Your Choice : ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("\n\n------ STUDENT PROFILE ------");
            printf("\nStudent ID : %d", studentID);
            printf("\nStudent Name : %s", studentName);
            printf("\nDepartment : %s", department);
            printf("\nSemester : %d", semester);
            break;
        case 2:
            printf("\n\n------ COURSE DETAILS ------");
            printf("\nCourse 1 : Programming in C");
            printf("\nCourse 2 : Mathematics");
            break;
        case 3:
            printf("\n\n------ FEE DETAILS ------");
            printf("\nTuition Fee : Rs.50,000");
            printf("\nStatus : Fee Paid");
            break;
        case 4:
            printf("\n\n------ ATTENDANCE DETAILS ------");
            printf("\nWorking Days : 90");
            printf("\nDays Present : 82");
            printf("\nAttendance : 91.11%%");
            break;
        case 5:
            printf("\n\n------ EXAMINATION DETAILS ------");
            printf("\nInternal Marks : 46/50");
            printf("\nHall Ticket : Available");
            break;
        case 6:
            printf("\n\nThank You... Logged Out Successfully.");
            break;
        default:
            printf("\n\nInvalid Choice.");
    }
    printf("\n\n*****************************************\n");
    return 0;
}
