#ifndef MYLIB_H   // include guard ไม่ให้ include ซ้ำ
#define MYLIB_H

#include <stdio.h>
#include <stdlib.h>

int readInt();
float readFloat();
char *readStr(int size);
void printIntArray(int[], int);

#endif