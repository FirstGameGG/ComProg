#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[4];
    int num;

    fgets(input, 4, stdin);
    num = atoi(input);

    printf("Binary number of %d is ", num);
    for (int i = 3; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf(".\n");

    return 0;
}
