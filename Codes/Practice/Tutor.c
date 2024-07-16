#include <stdio.h>
#define PI 3.14
//define จะต้องตั้งเป็นตัวใหญ่ทั้งหมด
//c -> compiler -> source code

int main(){
    unsigned long long int a;
    float b = 10.1234567890123456789;
    double c = 10.1234567890123456789;
    int A = 10;
    printf("Hello %.15f\n%.15f", b, c);
    printf("\n%d", ++A); //บวกก่อนค่อยส่ง
    printf("\n%d", A);
    printf("\n%d", A++); //ส่งก่อนค่อยบวก
    printf("\n%d\n", A);
    printf("%d\n", 2 < 10 < -1);

    int AA = 10; //1010
    int BB = 2; //0010
    printf("%d\n", AA&BB);
    printf("%d\n", BB<<2); //จะได้ 1000
    printf("%s\n", 2 == 3 ? "TRUE" : "False"); // 2 == 3 ไหม ถ้าใช่ True ไม่ใช่ False
    
    float x = 2.95;
    printf("Result: %d\n", (int) x); //convert int to float
    putchar('c'); //1 character only
    puts("aaa"); // string and newline

    char name[10];
		printf("Enter your name: ");
    fgets(name, sizeof(name) -1, stdin); // ที่ลบ 1 ตรง sizeof เพราะเหลือที่ไว้ให้ null character
    puts(name);

    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);

    int i = 0;
    while (i < 5) {
        i++;
        if (i == 3)
        continue;
    printf("%d ", i); // 1 2 4 5
    }
    printf("\n");


//Fucking Hell loop
/*
    int i = 0;
    while (i < 5) {
        i++;
        if (i == 3)
        continue;
    printf("%d ", i); // 1 2 4 5
    }
    printf("\n");*/

//Extra Ans 8 17 6
    return 0;
    }

