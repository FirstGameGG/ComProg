#include <stdio.h>
#include <stdlib.h>

int main(){
    char num[20];
    float salary, tax = 0;

    fgets(num, 20, stdin);
    salary = atof(num);

    if (salary > 300000){
        tax += (salary - 300000) * (10.0 / 100.0);
        tax += 300000 * (5.0 / 100.0);
        printf("%.2f", tax);
    }
    else if (salary <= 300000 && salary >= 0){
        tax += salary * (5.0 / 100.0);
        printf("%.2f", tax);
    }
    else{
        printf("Error: Salary must be greater or equal to 0");
    }
}