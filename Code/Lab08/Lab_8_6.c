#include <stdio.h>

struct complex {
    float real;
    float imag;
};

struct complex add_complex(struct complex C, struct complex D) {
    struct complex result;
    result.real = C.real + D.real;
    result.imag = C.imag + D.imag;
    return result;
}

struct complex multiply_complex(struct complex C, struct complex D) {
    struct complex result;
    result.real = C.real * D.real - C.imag * D.imag;
    result.imag = C.real * D.imag + C.imag * D.real;
    return result;
}

void print_complex(char* operation, struct complex E) {
    if (E.imag > 0 && E.real != 0) printf("%s%.1f + %.1fi\n", operation, E.real, E.imag);
    else if (E.imag < 0 && E.real != 0) printf("%s%.1f - %.1fi\n", operation, E.real, (E.imag-(E.imag * 2)));
    else if (E.imag == 0) printf("%s%.1f\n", operation, E.real);
    else if (E.real == 0) printf("%s%.1fi\n", operation, E.imag);
}

int main() {
    struct complex C, D, E, F;

    printf("Enter C: ");
    scanf("%f %f", &C.real, &C.imag);

    printf("Enter D: ");
    scanf("%f %f", &D.real, &D.imag);

    E = add_complex(C, D);
    F = multiply_complex(C, D);

    print_complex("C + D = ", E);
    print_complex("C x D = ", F);

    return 0;
}