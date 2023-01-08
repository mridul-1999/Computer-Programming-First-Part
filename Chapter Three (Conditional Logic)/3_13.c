#include <stdio.h>

int main()
{
    char vowel;
    printf("Enter your letter : ");
    scanf("%c",&vowel);

    if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u'){
        printf("%c is vowel \n",vowel);
    }
    else{
        printf("%c is consonant \n", vowel);
    }
    return 0;
}
