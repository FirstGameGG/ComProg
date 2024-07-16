#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[10];
    int num;

    fgets(input, 10, stdin);
    num = atoi(input);

    if (num >=0){
        while (num >= 0){
            printf("%d\n", num);
            num--;
        }
    }
}