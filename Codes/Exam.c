#include <stdio.h>

typedef struct {
    short int score;
} Record;

int main() {
    short int nExaminees;
    short int totalExam;
    char correctChoice[1000];
    char choice[1000]; // Fixed array size

    scanf("%hd %hd", &nExaminees, &totalExam);

    for (short int i = 0; i < totalExam; i++) {
        scanf(" %c", &correctChoice[i]);
    }

    Record examinees[nExaminees];
    for (short int n = 0; n < nExaminees; n++) {
        examinees[n].score = 0;
        for (short int i = 0; i < totalExam; i++) {
            scanf(" %c", &choice[i]);
            if (choice[i] == correctChoice[i]) {
                examinees[n].score += 1;
            }
        }
    }

    for (short int n = 0; n < nExaminees; n++) {
        printf("%d ", examinees[n].score);
    }

    return 0;
}
