#include <stdio.h>

int main()
{
    char word[50], reverse_word[50];
    int i, j, len;

    scanf("%s",word);
    len = strlen(word);

    for(i = 0, j = len - 1; i < len; i++, j--){
        reverse_word[i] = word[j];
    }
    reverse_word[i] = '\0';
    printf("Check input is %s \n", reverse_word);

    if(0 == strcmp(word,reverse_word)){
        printf("%s is palindrome \n",word);
    }
    else{
        printf("%s is not palindrome \n", word);
    }
    return 0;
}
