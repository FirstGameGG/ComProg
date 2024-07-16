#include <stdio.h>

int main(){
    int x = 12, y = 23;
    int z = -x + y--;
    printf("z = %d", z);
}