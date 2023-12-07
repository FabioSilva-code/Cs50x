// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill = get_float("Bill before tax and tip: ");
    float tax = get_float("Sale Tax Percent: ");
    int tip = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill, tax, tip));
}
// TODO: Complete the function
float half(float bill, float tax, int tip)
{
    float tax_percent = (bill * tax) / 100;

    float tip_percent = (bill * tip) / 100;

    float totalcost = bill + tax_percent + tip_percent;

    float halfcost = totalcost / 2;

    return halfcost;
}