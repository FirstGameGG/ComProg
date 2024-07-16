#include <stdio.h>

int main() {
    char c, *cp;
    float f, *fp;
    
    printf("%d %d %d %d", sizeof(c), sizeof(*cp), sizeof(f), sizeof(*fp));

    return 0;
}