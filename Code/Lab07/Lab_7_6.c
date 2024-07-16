#include <stdio.h>

int charcount(char *s)
{
    int count = 0;
    while (*s != '\0'){
        count++;
        s++;
        }
    return count;
}

void charweave(char *s,char *result)
{    
    int index = 0, i = 0; 
    int n = charcount(s) * 2, length = charcount(s) - 1;

    for (; index < n; index += 2, i++){
        result[index] = s[i];
        result[index + 1] = s[length - i];
    }
    result[index] = '\0';
}



int main()
{  char str[100],result[200];

   printf("String: ");
   gets(str);   /* read a line of characters from the input to "str" variable */
   charweave(str,result);
   printf("Output: %s\n",result);
   return 0;
}