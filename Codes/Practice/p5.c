#include <stdio.h>
#include <stdlib.h>
/*
int main(){
    int n = 10;

    for (int i = n; i > 0; i--){
        for (int j = 0; j < i; j++){
            printf("-");
        }
        for (int j = 1; j <= n - i; j++){
            printf("%c", 96 + i);
        }
        printf("\n");

    }
}
*/
/// Pointer

/*
int main(){
    int a, b;
    printf("a = %d, reference of a %p\n",a ,&a);
    char str[20]; // array is pointer -> not need &

    scanf("%d-%d %s", &a, &b, str); //scanf is pass by reference
    printf("%s %d %d", str, a, b);
}

*/

int main(){
    int x = 100;
    int *ptr; // int *ptr = &x;
    ptr = &x;

    printf("x = %d, reference of x %p\n",x ,&x);
    printf("ptr = %d, reference of ptr %p\n",ptr ,&ptr);
    printf("dereferencing ptr %d\n", *ptr);

    int data[10] = {10, 20, 30, 40, 50};
    printf("data[0] = %d, reference of data[0] = %p\n", data[0], &data[0]);
    printf("data = %p\n", data); //name of array will always collect index 0
    printf("data = %d\n", *(data + 1));

    int *arrPtr = data;
    printf("arrPtr = %p, *arrPtr = %d\n", arrPtr + 100, *(arrPtr + 100)); //arrPtr can access all memory
    arrPtr += 100;
    *arrPtr = 100;
    printf("arrPtr = %p, *arrPtr = %d\n", arrPtr, *arrPtr);
    
/*    
    arrPtr = 100;
    *arrPtr = 0;
    printf("arrPtr = %p, *arrPtr = %d\n", arrPtr, *arrPtr);
*/
/*
    int i = 0;
    while(1){
        arrPtr += 1;
        *arrPtr = 0;
        i++;
    } //rm -rf Danger!!!!!!!!!
*/

    for (int i = 0; i < 10; i++){
        printf("[%p]data[%d] = %d\n",data, i, data[i]);
    }
    char str[20];
    scanf("%s", str);
    for (int i = 0; *(str + i) != '0'; i++){
        printf("%c\n", *(str+i));
    }
}

