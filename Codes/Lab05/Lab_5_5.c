#include <stdio.h>

int main(){
    unsigned int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i=0; i < n; i++){
            for(int j = 1; j <= i + 1; j++){
                if (j % 2 != 0) printf("-");
                else printf("x");
            }
            printf("\n");
        }
    for (int i= n - 2; i >= 0; i--){
            for(int j = 1; j <= i + 1; j++){
                if (j % 2 != 0) printf("-");
                else printf("x");
            }
            printf("\n");
        }
    }