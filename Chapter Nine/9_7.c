#include <stdio.h>

int main()
{
    char str1[] = "Bangla";
    char str2[] = "desh";
    char str3[15];

    int i, j, length1 = 6, length2 = 4;

    for(i = 0, j = 0; i < length1; i++, j++){
        str3[j] = str1[i];
    }
    for(i = 0; i < length2; i++, j++){
        str3[j] = str2[i];
    }
    str3[j] = '\0';

    printf("%s \n", str3);

    return 0;
}
