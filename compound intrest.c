#include<stdio.h>
int main()
{
    float principal, rate, time, compound_interest;

    printf("\nEnter the Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter the Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter the Time Period: ");
    scanf("%f", &time);

    compound_interest = principal * pow((1 + rate / 100), time) - principal;

    printf("\nCompound Interest = %.2f\n", compound_interest);

return 0;
}
