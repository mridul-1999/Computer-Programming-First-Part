#include <stdio.h>

int main()
{
    double celsius, farenhailt;

    printf("Enter the temperature in Celsius : ");
    scanf("%lf", &celsius);

    farenhailt = 1.8 * celsius + 32;

    printf("Temperature in farenheit is : %.2lf\n", farenhailt);

    return 0;
}
