#include <stdio.h>

struct Student {
    char id[20];
    int midterm;
    int final;
};

char calculateGrade(int score) {
    if (score >= 80) return 'A';
    else if (score >= 70) return 'B';
    else if (score >= 60) return 'C';
    else if (score >= 50) return 'D';
    else return 'F';
}

int main() {
    struct Student students[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter Student ID: ");
        scanf("%s", students[i].id);
        printf("Enter Student Midterm: ");
        scanf("%d", &students[i].midterm);
        printf("Enter Student Final: ");
        scanf("%d", &students[i].final);
    }

    for (int i = 0; i < 5; i++) {
        int total = students[i].midterm + students[i].final;
        char grade = calculateGrade(total);
        printf("Student ID %s receives grade %c.\n", students[i].id, grade);
    }

    return 0;
}
