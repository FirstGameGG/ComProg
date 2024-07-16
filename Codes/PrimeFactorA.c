#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 1) printf("1 = 1\n");
    else if (num > 1) {
        printf("%d = ", num);
        int i = 2;
        while (num > 1) {
            int countExpo = 0;

            if ((num / i) < i) break;
            while (num % i == 0) {
                num /= i;
                countExpo++;
            }
            if (countExpo > 0) {
                printf("%d", i);
                if (countExpo > 1) printf("^%d", countExpo);
                if (num > 1) printf(" x ");
            }
            i++;
        }
        if (num > 1) printf("%d", num);
        printf("\n");
    }
    return 0;
}