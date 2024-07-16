#include <stdio.h>

double findAverage(char *filename)
{
    FILE *fp;
    double total = 0;
    int n = 0;
    int temp;

    fp = fopen(filename, "r");

    while (fscanf(fp, "%d", &temp) != EOF){
        total += temp;
        n++;
    }
    fclose(fp);
    return total / n;
}

int main()
{
    char filename[20];
    double average;
    scanf("%s", filename);
    average = findAverage(filename);
    printf("Average score is %.4lf\n", average);
}