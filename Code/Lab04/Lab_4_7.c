#include <stdio.h>
#include<stdlib.h>

int main(){
    char num[7];
    int n;
    fgets(num,20,stdin);
    n = atoi(num);

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i > 0; i--){
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}