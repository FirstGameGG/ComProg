#include <stdio.h>

int main(){
    double n, round = 1, pi = 0;
    printf("Enter n: ");
    scanf("%lf", &n);

    for (int i = 1; i <= n; i++){
        if (i % 2 == 0) pi -= (4 / (2 * round - 1));
        else pi += (4 / (2 * round - 1));
        round += 1;
    }
    printf("%.10lf", pi);

}