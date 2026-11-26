#include <stdio.h>

struct Employee {
    int ID;
    char name[50];
    float basic, house, medical;
};

int main() {
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee E[n];
    float gross[n];

    for (int i = 0; i < n; i++) {
        printf("Employee %d (ID name basic house-rent medical): ", i + 1);
        scanf("%d %s %f %f %f", &E[i].ID, E[i].name, &E[i].basic, &E[i].house, &E[i].medical);
        gross[i] = E[i].basic + E[i].house + E[i].medical;
    }

    printf("\nID\tNAME\tBasic\t\tHouseRent\tMedical\t  Gross\n");
    for (int j = 0; j < n; j++) {
        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t  %.2f\n",
               E[j].ID, E[j].name, E[j].basic, E[j].house, E[j].medical, gross[j]);
    }

    return 0;
}