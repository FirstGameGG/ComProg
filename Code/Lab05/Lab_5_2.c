#include <stdio.h>

int main(){
    int n, isPythagorean = 0;
    scanf("%d", &n);

    for (int a = 1; a < n; a++){
        for (int b = a + 1; b < n ;b++){
            int c = n - a - b;
            if (c * c == (a * a) + (b * b)){
            printf("(%d, %d, %d)", a, b, c);
            isPythagorean = 1;
            break; 
            }
        }
    }
    if (isPythagorean == 0) printf("No triple found.");
}