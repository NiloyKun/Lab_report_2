#include <stdio.h>

float calculateTotal(float m1, float m2, float m3, float m4, float m5) {
    return m1 + m2 + m3 + m4 + m5;
}

float calculateAverage(float total) {
    return total / 5.0;
}

void calculateGrade(float avg, char grade[], float *gpa) {
    if (avg >= 80) {
        grade[0] = 'A';
        grade[1] = '+';
        grade[2] = '\0';
        *gpa = 4.00;
    } else if (avg >= 70) {
        grade[0] = 'A';
        grade[1] = '\0';
        *gpa = 3.50;
    } else if (avg >= 60) {
        grade[0] = 'A';
        grade[1] = '-';
        grade[2] = '\0';
        *gpa = 3.00;
    } else if (avg >= 50) {
        grade[0] = 'B';
        grade[1] = '\0';
        *gpa = 2.50;
    } else if (avg >= 40) {
        grade[0] = 'C';
        grade[1] = '\0';
        *gpa = 2.00;
    } else {
        grade[0] = 'F';
        grade[1] = '\0';
        *gpa = 0.00;
    }
}

void displayResult(char name[], int id, float total, float avg, char grade[], float gpa, int passed) {
    printf("\n------ Student Result ------\n");
    printf("Name    : %s\n", name);
    printf("ID      : %d\n", id);
    printf("Total   : %.0f\n", total);
    printf("Average : %.2f\n", avg);
    printf("Grade   : %s\n", grade);
    printf("GPA     : %.2f\n", gpa);

    if (passed == 1) {
        printf("Result  : Pass\n");
    } else {
        printf("Result  : Fail\n"); 
    }
}

int main() {
    char name[100];
    int id;
    float marks[5];
    float total, avg, gpa;
    char grade[3];
    int passed = 1;

    printf("Enter student name: ");
    scanf(" %[^\n]", name);

    printf("Enter student ID: ");
    scanf("%d", &id);

    printf("Enter marks of 5 subjects: ");
    for (int i = 0; i < 5; i++) {
        scanf("%f", &marks[i]);
        if (marks[i] < 0 || marks[i] > 100) {
            printf("Invalid mark!\n");
            return 0;
        }
        if (marks[i] < 40) {
            passed = 0;
        }
    }

    total = calculateTotal(marks[0], marks[1], marks[2], marks[3], marks[4]);
    avg = calculateAverage(total);
    calculateGrade(avg, grade, &gpa);

    if (avg < 40) {
        passed = 0;
    }

    displayResult(name, id, total, avg, grade, gpa, passed);

    return 0;
}