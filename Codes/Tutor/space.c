#include <stdio.h>

/*
int main(){
    int x;
    float y;

    x = 10;
    y = 2.54;

    float z; 
    z = x * y;
    printf("%d",012 + 123);

}
*/

/*
int main(){
    char Double;
    printf("Hello, worldy\b\b\b\b\b\bSmith");
    Double = getchar();
    Double = Double + 1;
    putchar(Double);
    printf("\n");
    printf("%f\n",1 + 2 - 3 * 4 / 5);
    short c;
    printf("%d\n", sizeof(c));
}
*/


/*
int main(){
    int x = 12; 
    int y = 23;
    int z;
    z = -x + y--;
    printf("z = %d" , z);
}
*/

/*
int main(){

int a = 5, b = 2, c = 8;
int r1, r2, r3, r4, r5, r6;

r1 = a + b * c;
r2 = (a + b) * c;
r3 = a / b;
r4 = a % b;
r5 = a + b / c;
r6 = (a + b) /c;
int r7 = 1 + 2 - 3 * 4 / 5;
printf("%d %d %d %d %d %d",r1 ,r2, r3, r4, r5, r6);
printf("%f",r7);
}
*/


/*
int main(){
    unsigned char a = 5, b = 3;
    unsigned char r1, r2, r3, r4, r5, r6;

    r1 = a & b;
    r2 = a | b;
    r3 = a ^ b;
    r4 = ~(a | 0xf0);
    r5 = a << 1;
    r6 = b >> 1;

    printf("%d %d %d %d %d %d",r1 ,r2, r3, r4, r5, r6);
}
*/

int main(){
    int i, j;
    char s[12] = "hello world";

    for (i=j=0; i < 11; i++)
    if (s[i] != s[j] && s[i] != ' ')
    s[j++] = s[i] - 'a' + 'A';
    puts(s);
}