#include <stdio.h>
#include <stdlib.h>

int main(){
    char num[5];
    int a, b, c;
    printf("Enter length of side A: ");
    fgets(num, 5 , stdin);
    a = atoi(num);

    printf("Enter length of side B: ");
    fgets(num, 5 , stdin);
    b = atoi(num);

    printf("Enter length of side C: ");
    fgets(num, 5 , stdin);
    c = atoi(num);

    if (a == b && b == c){
        printf("Triangle type is equilateral.");
    }
    else if ((a + b <= c || a + c <= b || b + c <= a) || (a <= 0 || b <= 0 || c <= 0)){
        printf("Triangle type is invalid.");     
    }
    else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a)){
        printf("Triangle type is isosceles.");
    }
    else{
        printf("Triangle type is scalene.");
    }
}