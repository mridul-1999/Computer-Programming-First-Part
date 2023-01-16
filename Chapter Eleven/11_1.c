#include <stdio.h>

int main()
{
    int marks[4][10] = {{84,94,79,24,72,92,47,52,49,86},{99,49,29,42,48,81,97,59,50,85},{95,84,59,29,53,81,40,83,80,45,},{0,0,0,0,0,0,0,0,0,0}};
    int col;

    for(col = 0; col < 10; col++){
        marks[3][col] = marks[0][col] / 4.0 + marks[1][col] / 4.0 + marks[2][col] / 2.0 ;

        printf("Roll NO : %d Total Marks : %d \n", col+1, marks[3][col]);
    }
    return 0;
}
