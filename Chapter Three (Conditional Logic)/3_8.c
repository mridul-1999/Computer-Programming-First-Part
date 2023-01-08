#include <stdio.h>

int main()
{
    int number = 5;

    int reminder = (number % 2);

    if(reminder == 0){
        printf("The number is event \n");
    }
    else{
        printf("The number is odd \n");
    }
    return 0;
}
