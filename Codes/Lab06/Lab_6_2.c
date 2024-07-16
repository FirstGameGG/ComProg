#include <stdio.h>

int main(){
    int n = 0, credit = 0, totalCredit = 0; 
    float GPA = 0;
    char grade;
    printf("Enter number of subject(s): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("Enter credit,grade for subject #%d: ", i);
        scanf("%d,%c", &credit, &grade);
        if (grade == 'A' || grade == 'a') GPA += (credit * 4);
        else if (grade == 'B' || grade == 'b') GPA += (credit * 3);
        else if (grade == 'C' || grade == 'c') GPA += (credit * 2);
        else if (grade == 'D' || grade == 'd') GPA += (credit * 1);
        else if(grade == 'F' || grade == 'f') GPA += (credit * 0);
        totalCredit += credit;
    }
    printf("GPA = %.2f", (GPA / totalCredit));
}