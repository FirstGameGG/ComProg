#include <stdio.h>

unsigned char zero(int d){
    int c;

    if ((c=getchar()) == EOF)
    return d;
    else
    return zero(d + (c >= '0' && c <= '9')) + (c == '0');
}

int main(){
    printf("%d", zero(0));
}