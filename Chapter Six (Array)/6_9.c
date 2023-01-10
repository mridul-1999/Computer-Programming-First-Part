#include <stdio.h>

int main()
{
    int i;
    int total_marks[] = {03,92,89,59,01,80,98,40,93,89,80,94,80,98,05,98,20,93,58,39,91,10,95,63,20,39,57,84,96,50,76,85,94,67,58,43,90,27,65,84,93,02,93,95,48,93,81,54};
    int marks_count[101];

    for(i = 0; i < 101; i++){
        marks_count[i] = 0;
    }
    for(i = 0; i < 40; i++){
        marks_count[total_marks[i]]++;
    }
    for(i = 50; i <= 100; i++){
        printf("Marks : %d Count : %d \n", i, marks_count[i]);
    }
    return 0;
}

