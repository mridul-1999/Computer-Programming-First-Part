#include <stdio.h>

int main()
{
    int namata[10][12];
    int row, col;

    for(row = 0; row < 12; row++){
        for(col = 0; col < 12; col++){
            namata[row][col] = (row + 1 ) * (col + 1);
        }
    }
    for(row = 0; row < 12; row++){
        for(col = 0; col < 12; col++){
            printf("%d X %d = %d \n",(row+1),(col+1), namata[row][col]);
        }
        printf("=====\n");
    }
    return 0;
}
