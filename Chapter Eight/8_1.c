#include <stdio.h>

int main()
{
    int ara[] = {1,2,3,4,5,6,11,14,15,15,20,25,33,83,87,97,99,100};
    int low_index = 0;
    int high_index = 15;
    int mid_index;
    int num = 97;

    while(low_index <= high_index){
        mid_index = (low_index + high_index) / 2;
        if(num == ara[mid_index]){
            break;
        }
        if(num < ara[mid_index]){
            high_index = mid_index - 1;
        }
        else{
            low_index = mid_index + 1;
        }
    }
    if(low_index > high_index){
        printf("%d is not in the array \n", num);
    }
    else{
        printf("%d is found in the array. it is the %d the element of the array \n",ara[mid_index],mid_index);
    }
    return 0;
}
