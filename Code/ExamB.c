#include <stdio.h>

int main() {
    int examinees, totalExams;
    scanf("%d %d", &examinees, &totalExams);

    int answer[totalExams];
    for (int i = 0; i < totalExams; i++) scanf("%d", &answer[i]);

    int scoreRecord[examinees];
    for (int i = 0; i < examinees; i++) {
        scoreRecord[i] = 0;
        for (int j = 0; j < totalExams; j++) {
            int examineeAns;
            scanf("%d", &examineeAns);
            if (examineeAns == answer[j]) scoreRecord[i]++;
        }
    }

    for (int i = 0; i < examinees; i++) printf("%d ", scoreRecord[i]);

    return 0;
}
