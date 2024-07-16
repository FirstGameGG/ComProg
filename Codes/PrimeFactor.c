#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 1) printf("1 = 1\n");
    else if (num > 1) {
        printf("%d = ", num);
        int i = 2;
        while (i * i <= num) {
            int count = 0;
            while (num % i == 0) {
                num /= i;
                count++;
            }
            if (count > 0) {
                printf("%d", i);
                if (count > 1) printf("^%d", count);
                if (num > 1) printf(" x ");
            }
            i++;
        }
        if (num > 1) printf("%d", num);
        printf("\n");
    }
    return 0;
}