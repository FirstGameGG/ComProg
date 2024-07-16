#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    char input[7];
    int a, b, GCD;

    fgets(input, 7, stdin);
    a = atoi(input);
    fgets(input, 7, stdin);
    b = atoi(input);

    if (a <= 10000 && b <= 10000){
        GCD = gcd(a, b);
        a /= GCD;
        b /= GCD;

        if (b == 1){
            printf("= %d", a);
        }
        else{
            printf("= %d/%d", a, b);
        }
    }
}
