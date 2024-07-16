#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int size, diameter, isPepperoni, isChesse, isMushroom;
    float cost, excost = 0, area;
    char input[10];

    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(input, sizeof(input), stdin);
    size = atoi(input);

    printf("Extra pepperoni? (1=yes, 0=no): ");
    fgets(input, sizeof(input), stdin);
    isPepperoni = atoi(input);

    printf("Extra cheese? (1=yes, 0=no): ");
    fgets(input, sizeof(input), stdin);
    isChesse = atoi(input);

    printf("Extra mushroom? (1=yes, 0=no): ");
    fgets(input, sizeof(input), stdin);
    isMushroom = atoi(input);

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    if (size == 1){
        diameter = 10;
    }
    else if (size == 2){
        diameter = 16;
    }
    else if (size == 3){
        diameter = 20;
    }

    if (isPepperoni == 1){
        excost += 0.5;
    }
    if (isChesse == 1){
        excost += 0.25;
    }
    if (isMushroom == 1){
        excost += 0.30;
    }

    area = M_PI * pow(diameter, 2) / 4;
    cost = 5 + (2 * area) + (excost * area);
    cost = 1.5 * cost;
    printf("Your order costs %.2f baht.\n", cost);
    printf("Thank you.");
}
