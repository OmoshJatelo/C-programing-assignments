#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dependant_number, gross_pay;
    double net_pay, tax_payable;
    printf("Please enter your gross pay : ");
    scanf("\n%d", &gross_pay);
    printf("\nPlease enter the number of dependants that you have : ");
    scanf("\n%d", &dependant_number);
    printf("\nGross pay = %d", gross_pay);
    if (dependant_number < 3)
    {
        if (gross_pay <= 10000)
        {
            tax_payable = 0.0 / 100 * gross_pay;
            printf("\nTax payable = %lf", tax_payable);
        }
        else if (gross_pay > 10000 && gross_pay <= 20000)
        {
            tax_payable = (15.0 / 100) * gross_pay;
            printf("\nTax payable = %lf", tax_payable);
        }
        else if (gross_pay > 20000)
        {
            tax_payable = (35.0 / 100) * gross_pay;
            printf("\nTax payable = %lf", tax_payable);
        }
    }
