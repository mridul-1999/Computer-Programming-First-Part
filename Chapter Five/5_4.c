#include <stdio.h>

int main()
{
    double loan_amount, interest_rate, number_of_years, total_number,monthly_amount;

    printf("Enter the loan amount : ");
    scanf("%lf",&loan_amount);
    printf("Enter the interest rate : ");
    scanf("%lf",&interest_rate);
    printf("Enter number of year : ");
    scanf("%lf",&number_of_years);

    total_number = loan_amount + loan_amount * interest_rate * number_of_years / 100.00;
    monthly_amount = total_number / (number_of_years * 12);

    printf("Total Number : %.2lf \n", total_number);
    printf("Monthly amount : %.2lf \n", monthly_amount);

    return 0;
}
