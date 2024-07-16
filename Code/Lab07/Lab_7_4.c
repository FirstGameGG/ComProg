#include <stdio.h>
#include <stdlib.h>

char* last_word_chain(int length, int n, char *array[]){
    for (int i = 0; i < n - 1; i++){
        int count = 0;
        for (int j = 0; j < length; j++){
            if (array[i][j] != array[i + 1][j]) count++;
        }
        if (count > 2) return array[i];
    }
    return array[n-1];
}

int main(){
    int length, n;
    scanf("%d", &length);
    scanf("%d", &n);

    char* array[n];

    for (int i = 0; i < n; i++){
        array[i] = malloc(length + 1);
        scanf("%s", array[i]);
    }

    printf("%s", last_word_chain(length, n, array));
}
