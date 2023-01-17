#include <stdio.h>
#include <math.h>

int main()
{
    int binary[40];
    int i,j, decimal_number;

    printf("Enter a decimal number i give you binary : \n");

    while(scanf("%d",&decimal_number) == 1){
        while(decimal_number > 0){
            binary[i] = decimal_number % 2;
            i++;
            decimal_number = decimal_number / 2;
        }
        for(j = i-1; j >= 0; j--){
            printf("%d", binary[j]);
        }
        printf("\n");
    }
    return 0;
}
