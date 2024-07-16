#include <stdio.h>

int main(){
    unsigned long long npow, n, nshow;
    int isAuto = 1;
    printf("Input n = ");
    scanf("%llu", &n);
    npow = n * n;
    nshow = n;

    while (n > 0){
        if (npow % 10 != n % 10){
            isAuto = 0;
            break;
        }
        npow /= 10;
        n /= 10;
    }
    printf("n^2 = %llu\n", (nshow * nshow));
    if (isAuto == 1) printf("Yes. %llu is automorphic number.", nshow);
    else printf("No. %llu is not automorphic number.", nshow);
}