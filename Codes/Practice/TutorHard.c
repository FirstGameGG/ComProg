#include <stdio.h>
#include <stdlib.h>

int summation(int x, int y){
    return x + y;
}

int *createArray(int n){
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++ ){
        arr[i] = 0;
    }
    return arr;
}


void printArray(int *arr, int size){
    for (int i = 0; i < size; i++){
        printf("[%d] %d", i, *(arr +i));
    }
}
int main(){
    printf("Hello World\n");   
    printf("%d\n",summation(1, 2));


    int x = 5;
    int *x_ptr = &x; //ดอกจันครังแรกตอนประกาศ Pointer เท่านั้น ถ้านอกจากนั้นคือ dereference
    const int N =5;
    int *arr = createArray(N);
    printArray(arr, N);

    printf("x = %d\n\n", x);
    printf("x_ptr = %p\n\n", x_ptr);
    printf("&x = %p\n\n", &x);
    printf("&x_ptr = %p\n\n", &x_ptr);
    printf("*x_ptr = %p\n\n", *x_ptr);

}