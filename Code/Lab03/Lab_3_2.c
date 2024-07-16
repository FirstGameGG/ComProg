#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[12];
    long long a, b, c, A, B;
    int gcd, lcm;

    fgets(input, 12, stdin);
    a = atoll(input);
    A = atoll(input);

    fgets(input, 20, stdin);
    b = atoll(input);
    B = atoll(input);

    while (1){
        if (c == 0){
            break;
        }
        c = b % a;
        b = a;
        a = c;
    }
    gcd = b;
    lcm = (A * B) / gcd;
    printf("GCD: %lld\n", gcd);
    printf("LCM: %lld", lcm);
}