#include <stdio.h>

int main()
{
    int ara1[] = {5,3,2,1,4};
    int ara2[5];
    int i, index, minium,minimum_index;

    for(index = 0; index < 5; index++){
        minium = 1000;
        for( i = 0; i < 5; i++){
            if(ara1[i] < minium){
                minium = ara1[i];
                minimum_index = i;
            }
        }
        ara1[minimum_index] = 1000;
        ara2[index] = minium;
    }
    for(i = 0; i < 5; i++){
        printf("%d \n", ara2[i]);
    }
    return 0;
}

