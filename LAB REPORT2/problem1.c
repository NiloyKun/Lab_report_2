#include <stdio.h>
float calculateBill(int units) {
    float charge = 0;
    if(units <= 100){
        charge = units * 5.0;
    }
    else if (units <= 200){
        charge = (100 * 5.0) + ((units - 100) * 6.0);
    } 
    else {
       charge = (100 * 5.0) + (100 * 6.0) + ((units - 200) * 8.0);
    }
    return charge;
}

float calculateVAT(float charge) {
    return charge * 0.05;
}

void displayBill(int id, char name[], int units, float charge, float vat, float finalBill) {
    printf("\n------ Electricity Bill ------\n");
    printf("Customer ID          : %d\n", id);
    printf("Customer Name        : %s\n", name);
    printf("Units Consumed       : %d\n", units);
    printf("Electricity Charge   : Tk %.2f\n", charge);
    printf("VAT (5%%)            : Tk %.2f\n", vat);
    printf("Final Bill           : Tk %.2f\n", finalBill);
}
int main(){
    int id, units;
    char name[100];
    float charge, vat, finalBill;
    printf("Enter customer ID: ");
    scanf("%d", &id);
    printf("Enter customer name: ");
    scanf(" %[^\n]", name);
    printf("Enter units consumed: ");
    scanf("%d", &units);
    if (units < 0) {
        printf("Invalid.\n");
        return 0;
    }
    charge = calculateBill(units);
    vat = calculateVAT(charge);
    finalBill = charge + vat;
    displayBill(id, name, units, charge, vat, finalBill);
    return 0;
}