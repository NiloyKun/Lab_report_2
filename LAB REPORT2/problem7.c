#include <stdio.h>
struct Student{
    int ID;
    float CGPA;
    char name[50];
    char department[10];

};

int main(){
    struct Student s;
    
    printf("Enter student ID: ");
    scanf("%d", &s.ID);
    printf("Enter name: ");
    scanf(" %[^\n]", s.name);
    printf("Enter department: ");
    scanf(" %[^\n]", s.department);
    printf("Enter CGPA: ");
    scanf("%f", &s.CGPA);
    
    printf("\n");

    printf("------ Student Information ------\n");
    printf("Student ID  : %d\n",s.ID);
    printf("Name        : %s\n", s.name);
    printf("Department  : %s\n", s.department);
    printf("CGPA        : %.2f\n", s.CGPA);
    return 0;
}