#include<stdio.h>
#include<stdlib.h>

int main(){
    char input[7];
    int x, y;

    fgets(input, 7, stdin);
    x = atoi(input);
    fgets(input, 7, stdin);
    y = atoi(input);

    for (int i = 1 ; i <= x ; i++){
        for (int j = 1 ; j <= 1 ; j++){
            printf("*");
            }
        }
    printf("\n");
    for (int i = 1 ; i <= y - 1; i++){
        for (int j = 1 ; j <= i ; j++){
            printf(" ");
            }
        if (i == y - 1){
        printf("*");
        for (int j = 1 ; j <= x - 2 ; j++){
            printf("*");
            }
        printf("*\n");
        }
        else{
        printf("*");
        for (int j = 1 ; j <= x - 2 ; j++){
            printf(" ");
            }
        printf("*\n");
        }
    }

    }
