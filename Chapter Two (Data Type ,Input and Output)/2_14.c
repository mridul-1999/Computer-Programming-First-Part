#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter the first Number :- ");
    scanf("%d", &num1);
    printf("Enter the another Number :- ");
    scanf("%d", &num2);

    printf("%d + %d = %d \n", num1, num2, num1 + num2);
    printf("%d - %d = %d \n", num1, num2, num1 - num2);
    printf("%d * %d = %d \n", num1, num2, num1 * num2);
    printf("%d / %d = %d \n", num1,num2, num1/num2);

    return 0;
}
