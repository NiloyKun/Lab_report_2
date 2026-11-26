#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
    float fee;
};

int main() {
    int n;
    printf("Enter number of patients: ");
    scanf("%d", &n);

    struct Patient P[n];
    float total = 0;

    for (int i = 0; i < n; i++) {
        printf("Patient %d (ID name age disease fee): ", i + 1);
        scanf("%d %s %d %s %f", &P[i].id, P[i].name, &P[i].age, P[i].disease, &P[i].fee);
        total = total + P[i].fee;
    }

    printf("\nID\tName\tAge\tDisease\t\tFee\n");
    for (int j = 0; j < n; j++) {
        printf("%d\t%s\t%d\t%s\t\t%.2f\n",
               P[j].id, P[j].name, P[j].age, P[j].disease, P[j].fee);
    }

    printf("\nTotal consultation fees collected = Tk %.2f\n", total);

    return 0;
}