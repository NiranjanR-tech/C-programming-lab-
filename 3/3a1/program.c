#include <stdio.h>
int main() {
    int patientID, severityScore;
    printf("Enter Patient ID : ");
    scanf("%d", &patientID);
    printf("Enter Symptom Severity Score (0-100) : ");
    scanf("%d", &severityScore);
    printf("\n========= TRIAGE PRIORITY REPORT =========\n");
    printf("Patient ID : %d\n", patientID);
    if (severityScore >= 80) {
        printf("Priority : EMERGENCY - shift to ICU immediately\n");
    } else {
        if (severityScore >= 40) {
            printf("Priority : NORMAL - admit to general ward\n");
        } else {
            printf("Priority : ROUTINE - outpatient consultation\n");
        }
    }
    return 0;
}
