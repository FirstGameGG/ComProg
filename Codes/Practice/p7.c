#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

struct __Student {
    char firstname[30];
    char lastname[30];
    char *id;
    double score;
};

void print_student(struct __Student student){
    printf("Name: %s %s (%f)", student.firstname, student.lastname, student.score);
};

int main() {
    struct __Student student; //value type -> pass by value in function

    strcpy(student.firstname, "John");
    strcpy(student.lastname, "Doe"); //another function such as stpcpy memcpy memmove sprintf
    student.score = 110;

    //sprintf(student.lastname, "%s", "Does");
    print_student(student);

}