#include <stdio.h>

// Function prototype
double split_bill(double bill, int tax_percent, int tip_percent);

int main(void) {
    double bill, tax_percent, tip_percent;

    // Read bill amount, tax rate, and tip rate from the user
    printf("Enter bill amount: ");
    scanf("%lf", &bill);
    printf("Enter tax rate (percent): ");
    scanf("%lf", &tax_percent);
    printf("Enter tip rate (percent): ");
    scanf("%lf", &tip_percent);

    // Calculate and print the amount each person owes
    printf("Each person owes: $%.2lf\n", split_bill(bill, tax_percent, tip_percent));

    return 0;
}

// Calculates the amount each person owes when eating out at a restaurant and splitting the bill evenly
double split_bill(double bill, int tax_percent, int tip_percent) {
    // Convert tax_percent and tip_percent to decimal values
    double tax_decimal = tax_percent / 100.0;
    double tip_decimal = tip_percent / 100.0;

    // Calculate the total tax
    double tax = bill * tax_decimal;

    // Calculate the total tip
    double tip = bill * tip_decimal;

    // Calculate the total cost
    double total_cost = bill + tax + tip;

    // Return exactly half of the full amount
    return total_cost / 2;
}
