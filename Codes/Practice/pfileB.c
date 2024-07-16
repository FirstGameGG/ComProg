#include <stdio.h>

typedef struct {
    double m;
    double b;
} Record;

int main() {
    FILE *file = fopen("data_source_2.dat", "rb");
    if (file == NULL) {
        printf("Cannot open file\n");
        return 1;
    }

    Record record;
    double x = 1.0, y;
    while (fread(&record, sizeof(Record), 1, file)) {
        y = record.m * x + record.b;
        x = y;
    }

    fclose(file);
    printf("%.4lf\n", y);

    return 0;
}
