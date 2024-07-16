#include <stdio.h>

#include <stdio.h>

int remove_vowel(char *str)
{
    char *ptr = str;
    while (*str != '\0'){
        if (*str == 'a' || *str == 'A' || *str == 'e' || *str == 'E' || *str == 'i' || *str == 'I' || *str == 'o' || *str == 'O' || *str == 'u' || *str == 'U') str++;
        else {
            *ptr = *str;
            ptr++;
            str++;
        }
    }
    *ptr = '\0';
    return ptr - str;
}

int main()
{
    char str[80];

    printf(" Input: ");
    gets(str);

    remove_vowel(str);
    printf("Output: %s\n",str);

    return 0;
}
