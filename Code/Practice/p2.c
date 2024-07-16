/*
#include <stdio.h>
#include <stdlib.h>

int main(){
    char str[5];
    //gets(str) not recommend
    // 10 -> 12 -> collect include \0 \n
    fgets(str, 5 , stdin);

    printf("[%s]\n", str);

    int i = atoi(str); // array to integer
    double f = atof(str);
    long l = atol(str);
    char c = getchar();

    printf("%d\n", i + 100);
    printf("%f\n", f + 100);
    printf("%lf\n", l + 100);


}
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int isExist = 1; //True
    char isDigit[] = ""; // True -> it have null character

    // false -> 0, 0.0, '\0'
    char a = '\0'; // string must have character inside if not it will error

    //if, else if, else
    //relational operator
    // > < = >= <= != -> 0, 1
    //logical operator
    // && || !
    char str[20];
    fgets(str, 20, stdin);
    double score = atof(str);

    if (score >= 90){
        printf("A");
    }
    else if (score >= 80 && score < 90){
        printf("B");
    }
    else{
        printf("F");
    }
}