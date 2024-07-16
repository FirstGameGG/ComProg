#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20];
    int score;
} studentRecord;

void init(studentRecord list[], int size) {
    strcpy(list[0].id, "55100001");
    strcpy(list[1].id, "55100002");
    strcpy(list[2].id, "55100003");
    for (int i = 0; i < size; i++) {
        list[i].score = 0;
    }
}

void enterScore(studentRecord list[], int size){
    char inputID[20];
    int inputScore;
    for (int i = 0; i < size; i++) {
        scanf("%s %d", inputID, &inputScore);
        for (int j = 0; j < size; j++) {
            if (strstr(list[j].id, inputID) != NULL) {
                list[j].score = inputScore;
                break;
            }
        }
    }
}

void printRecords(studentRecord list[], int size) {
    printf("   ID        Score\n");
    for (int i = 0; i < size; i++) {
        printf("%s       %d\n", list[i].id, list[i].score);
    }
}

int main() {
    studentRecord list[3];
    init(list, 3);
    enterScore(list, 3);
    printRecords(list, 3);
    return 0;
}
