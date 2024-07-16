#include <stdio.h>

int main() {
    FILE *file = fopen("data_source_1.dat.txt", "r");
    if (file == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    double m, b, x = 1.0, y;
    while (fscanf(file, "%lf %lf", &m, &b) == 2) {
        y = m * x + b;
        x = y;
    }

    fclose(file);
    printf("%.4lf\n", y);

    return 0;
}
