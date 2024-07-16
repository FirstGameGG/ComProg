#include <stdio.h>
/*
int main(){
    int x = 10;
    int i;
    int A[100];
    int b = 10;

    A[100] = 20;
    printf("%d", A[100]);
}
*/

int main(){
    int A[10] = {0};
    int b = 20;
    for (int i = 0; i < 100; i++){
        A[i] = A[i] + 1;
        printf("%d\n", A[i]);
    }
    printf("%d\n", b);
}