#include <stdio.h>

int main(){
    int a = 20; // 4 bytes
    long b = 1000; // 4 bytes
    long long c = 1000;
    unsigned long long d = 1000;
    char g = 'a'; // 1 byte

    float e = 0.1; // 4 bytes
    double f = 0.1234;

    //char name[10];  arrray must specfic space
    char name[] = "name"; // {}

    printf("Hello world!\n");
    //print("%d %ld %llu %c %f %lf\n");
    printf("%d %ld %c %010.2f %lf\n", a, b, g, e, f);

    int q = 1 / 5;
    printf("%d\n", q);
    printf("%f\n", q);

    float r = 1 / 5.0;
    printf("%d\n", r);
    printf("%f\n", r);

    return 0;

}