#include <stdio.h>
#include <cs50.h>

float half(float bill, float tax, int tip);

int main(void)
{
    //gets user input 
    float BillBTT = get_float("Bill before tax and tip: ");
    float SaleTP = get_float("Sale Tax Percent: ");
    int TipP = get_int("Tip percent: ");
    printf("$%.2f\n", half(BillBTT, SaleTP, TipP));

}

//Function which calculates the half
float half(float bill, float tax, int tip)
{
    float after_tax = bill * (tax / 100) + bill;
    float after_tax_tip = after_tax * (tip / 100.0) + after_tax;
    float divide = after_tax_tip / 2;
    return divide;
}

