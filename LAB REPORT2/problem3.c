#include <stdio.h>

float calculateDiscount(float amount) {
    float discount = 0;

    if (amount >= 5000) {
        discount = amount * 0.10;
    } else if (amount >= 3000) {
        discount = amount * 0.05;
    } else {
        discount = 0;
    }

    return discount;
}

float calculateFinalAmount(float amount, float discount) {
    return amount - discount;
}

void displayReceipt(char name[], float amount, float discount, float finalAmount) {
    printf("\n------ Receipt ------\n");
    printf("Customer Name   : %s\n", name);
    printf("Purchase Amount : Tk %.2f\n", amount);
    printf("Discount        : Tk %.2f\n", discount);
    printf("Final Payable   : Tk %.2f\n", finalAmount);
}

int main() {
    char name[100];
    float amount, discount, finalAmount;

    printf("Enter customer name: ");
    scanf(" %[^\n]", name);

    printf("Enter purchase amount: ");
    scanf("%f", &amount);

    if (amount < 0) {
        printf("Invalid amount.\n");
        return 0;
    }

    discount = calculateDiscount(amount);
    finalAmount = calculateFinalAmount(amount, discount);
    displayReceipt(name, amount, discount, finalAmount);

    return 0;
}