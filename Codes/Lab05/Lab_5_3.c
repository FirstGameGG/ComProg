#include <stdio.h>

int main(){
    float value = 0, valInput = 0;
    char opInput[1] = "";
    printf("Initial Value: ");
    scanf("%f", &value);


    while (1){
        printf("\nOperator: ");
        scanf("%s", opInput);
        if (!(opInput[0] == '+' || opInput[0] == '-' || opInput[0] == '*' || opInput[0] == '/')) break;
        printf("Input Value: ");
        scanf("%f", &valInput);

        if (opInput[0] == '+') value += valInput;
        else if (opInput[0] == '-') value -= valInput;
        else if (opInput[0] == '*') value *= valInput;
        else if (opInput[0] == '/') value /= valInput;

        printf("Present Value is %.4f\n", value);
        
    }
    printf("\nFinish Calculation. Final Value is %.4f", value);
}