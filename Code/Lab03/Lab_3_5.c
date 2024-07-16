#include <stdio.h>
#include <stdlib.h>

int main(){
    char input[10];
    int length, i;

    fgets(input, 10, stdin);
    length = atoi(input);

    if (length < 2 || length > 26){
        if (length == 1){
            printf("a");
        }
        else{
            printf("-");
        }
    }
    else{
        for (i = 96 + length; i >= 98 ; i--){
            printf("%c-", i);
        }
        printf("a");
        for (i = 98; i <= 96 + length ; i++){
            printf("-%c", i);
        }
    }
}