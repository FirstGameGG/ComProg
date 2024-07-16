#include <stdio.h>

struct vector {
  float a;
  float b;
  float c;
};

int main()
{
    float x, y, z;
    struct vector vectoru;
    struct vector vectorv;
    printf("Enter u: ");
    scanf("%f %f %f", &vectoru.a, &vectoru.b, &vectoru.c);
    printf("Enter v: ");
    scanf("%f %f %f", &vectorv.a, &vectorv.b, &vectorv.c);

    x = (vectoru.b * vectorv.c) - (vectoru.c * vectorv.b);
    y = (vectoru.c * vectorv.a) - (vectoru.a * vectorv.c);
    z = (vectoru.a * vectorv.b) - (vectoru.b * vectorv.a);
    printf("u x v = %.1f %.1f %.1f", x , y, z);

  return 0;
}