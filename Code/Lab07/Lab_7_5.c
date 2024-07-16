#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define static "use malloc"

char* stoupper(const char *str) {
    char *c;
    int i;
    c = malloc(200 * sizeof(char));
    for (i = 0; str[i] != '\0'; i++){
        if (str[i] >= 97 && str[i] <= 122) c[i] = str[i] - 32;
        else c[i] = str[i];
    }
    *(c + i) = '\0';
    return c;
}

int main(){
	char s[100];
	char* result;

	scanf("%s",s);
	result = stoupper(s);
    if (result == s) printf("ERROR.\n");
	printf("%s\n",result);
}