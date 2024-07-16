#include<stdio.h>
#include<stdlib.h>

//Function

/* recursive อาจออกสอบ
5 + 4
    4 + 3
        3 + 2
            2 + 1
                1 + 0
    
    ข้อเสียคือเปลือง memory
*/

int add(int n){
    if (n == 0){
        return 0;
    }
    return n + add(n - 1);
}
int addTen(int x){
    x += 10; // Pass by value
    printf("in addTen x = %d\n", x);
    return x;
}

int x = 1000; // Global ถ้าไม่ได้กำหนดค่า จะเป็น 0
int addTwenty(); //Function Prototype ประกาศไว้ก่อนว่าจะมีฟังก์ชันนี้ แต่จะประกาศทีหลัง

int main(){
    int x = 100; // Local ถ้าไม่เจอ จะไปหา Global ที่อยู่ข้างบน ถ้าไม่กำหนดค่าตัวแปร ค่าเริ่มต้นจะเป็นค่าอะไรก็ไม่รู้
    int y = addTen(x);
    printf("int main x = %d , y = %d, address = %p\n",x ,y, &x);
    y = addTwenty(); // function เจอค่าที่ส่งไป จึงไปหาใน Global
    printf("int main 2 = %d , y = %d\n",x ,y);
    printf("%d", add(5));
    return 1;
}

int addTwenty(){
    x += 20;
    printf("in addTwenty x = %d\n",x);
}

//1 address in memory = 1 byte
//การลบตัวแปรในฟังก์ชัน จะลบ mapping memory เฉยๆ ไม่ได้ลบค่า เพราะฉะนั้นควรต้องกำหนดค่าให้ตัวแปรทุกครั้ง