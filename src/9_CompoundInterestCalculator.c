#include <stdio.h>
#include <math.h>

int main()
{
    double principal, rate, time, number, amount, compound_interest;

    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percent): ");
    scanf("%lf", &rate);

    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    printf("Enter the number of times interest is compounded per year: ");
    scanf("%lf", &number);

    // Convert rate from percentage to decimal
    rate = rate / 100;

    // Formula: A = P(1 + r/n)^(nt)
    amount = principal * pow((1 + rate / number), number * time);

    compound_interest = amount - principal;

    printf("\nFinal amount after %.2f years is: %.2lf\n", time, amount);
    printf("Compound interest is: %.2lf\n", compound_interest);

    return 0;
}