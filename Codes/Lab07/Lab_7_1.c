#include <stdio.h>

int main(){
    char input[50] = "";
    int count = 0;
    printf("String (without a space): ");
    scanf("%s", input);

    for (int i = 0; input[i] != '\0'; i++){
        if (input[i] == 'a' || input[i] == 'A' || input[i] == 'e' || input[i] == 'E' || input[i] == 'i' || input[i] == 'I' || input[i] == 'o' || input[i] == 'O' || input[i] == 'u' || input[i] == 'U'){
            printf("%c ", input[i]);
            count++;
        }
    }
    printf("\n");
    if (count <= 1) printf("This string contains %d vowel.", count);
    else printf("This string contains %d vowels.", count);
}