#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 1418113;
    char buffer[20];
    itoa(n, buffer, 2);
    printf("Binary value of %d is %s\n", n, buffer);
    return 0;
}