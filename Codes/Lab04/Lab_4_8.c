#include<stdio.h>
#include<stdlib.h>

void deciToBinary(int n){
    if (n == 0){
        return;
        }
    deciToBinary(n / 2);
    printf("%d", n % 2);
    }

int main(){
    char input[20];
    int decimal;

    fgets(input, 10, stdin);
    decimal = atoi(input);
    if (decimal != 0) deciToBinary(decimal);
    else printf("0");

}