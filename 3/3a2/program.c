#include <stdio.h>
int main() {
    int patientID, deptCode;
    float fee;
    char deptName[20];
    printf("Enter Patient ID : ");
    scanf("%d", &patientID);
    printf("Enter Department Code (1-Cardiology 2-Ortho 3-ENT 4-General) : ");
    scanf("%d", &deptCode);
    switch (deptCode) {
        case 1: fee = 800.0f; sprintf(deptName, "Cardiology");   break;
        case 2: fee = 600.0f; sprintf(deptName, "Orthopaedics"); break;
        case 3: fee = 500.0f; sprintf(deptName, "ENT");          break;
        case 4: fee = 300.0f; sprintf(deptName, "General");      break;
        default: fee = 0.0f; sprintf(deptName, "Invalid");
    }
    printf("\n========= DEPARTMENT ROUTING SLIP =========\n");
    printf("Patient ID : %d\n", patientID);
    printf("Department : %s\n", deptName);
    printf("Consultation Fee : Rs. %.2f\n", fee);
    return 0;
}
