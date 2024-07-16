#include <stdio.h>

int main() {
  int examinees, totalExams;
  int scoreRecord[examinees];
  int answer[totalExams];

  scanf("%d %d", &examinees, &totalExams);

  for (int i = 0; i < totalExams; i++) {
    scanf("%d", &answer[i]);
  }

  for (int i = 0; i < examinees; i++) {
    scoreRecord[i] = 0;
    for (int j = 0; j < totalExams; j++) {
      int examineeAns;
      scanf("%d", &examineeAns);
      if (examineeAns == answer[j]) scoreRecord[i]++;
    }
  }
  for (int i = 0; i < examinees; i++) {
    printf("%d ", scoreRecord[i]);
  }

  return 0;
}
