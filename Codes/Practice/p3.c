#include<stdio.h>
#include<stdlib.h>

int main(){
    int i = 0;
    while (i < 20){
        printf("%d\n", i);
        i++;

    }

    for (int i = 0; i < 20; i++){
        printf("%d\n",i);
    }

    while (1){
        if (i == 100){
            break;
        }
        printf("%d", i);
        i++;
    }
}