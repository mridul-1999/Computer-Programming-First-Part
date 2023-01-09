#include <stdio.h>

int main()
{
    int i, sum, n;
    sum = 0;

    printf("Enter the series value : ");
    scanf("%d",&n);

    for(i = 0; i <= n; i++){
        sum = sum + i;
    }
    printf("Summatiion of %d \n", sum);
    return 0;
}
