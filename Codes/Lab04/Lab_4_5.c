#include <stdio.h>
#include <stdlib.h>


int main(void) {
  char input[10];
  int n;

  
  fgets(input, 20, stdin);
  n = atoi(input);

  if (n < 1 || n > 26){
    printf("-");
    }
  else{
    for (int i = n; i > 0; i--){
      for (int j = 0; j < 2*i-2; j++){
        printf("-");
      }
      for (int k = n; k > i; k--){
          printf("%c-", 96 + k);
          }
      printf("%c", 96 + i);
      for (int k = i; k < n; k++){
          printf("-%c", 97 + k);
      }
      for (int j = 0; j < 2*i-2; j++){
          printf("-");
          }
      printf("\n");
      }

    for (int i = 1; i <= n; i++){
      for (int j = 0; j < 2*i-2; j++){
        printf("-");
      }
      if (i != 1){
      for (int k = n; k > i; k--){
          printf("%c-", 96 + k);
          }
      printf("%c", 96 + i);
      for (int k = i; k < n; k++){
          printf("-%c", 97 + k);
      }
      for (int j = 0; j < 2*i-2; j++){
          printf("-");
          }
        printf("\n");
      }
  }
  }
  return 0;
}