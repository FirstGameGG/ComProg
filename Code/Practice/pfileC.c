#include <stdio.h>

typedef struct {
    double m;
    double b;
    int id;
} Record;

double calculate_y(double x, Record record) {
    return record.m * x + record.b;
}

int main() {
    FILE *file = fopen("data_source_3.dat", "rb");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    Record record;
    double x = 1.0;
    while (fread(&record, sizeof(Record), 1, file)) {
        x = calculate_y(x, record);
    }

    fclose(file);

    printf("The final value of y is %.4f\n", x);

    return 0;
}
