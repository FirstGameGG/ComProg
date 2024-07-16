#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct _product {
    char name[30];
    int amount;
    double totalCost;
} Product;

void printStock(Product stock[], int nStock)
{
    int i;
    printf("%-20s|%6s|%-10s\n", "    Product Name", "Amount", "     Total");
    for (i = 0; i < nStock; i++) {
        printf("%-20s|%6d|%10.2lf\n",
            stock[i].name, stock[i].amount, stock[i].totalCost);
    }
}

//your code here

// ฟังก์ชันสำหรับสรุปข้อมูลจากไฟล์บันทึกการขายเสื้อผ้า
void reportStock(char *filename) {
    // ประกาศตัวแปรสำหรับเก็บข้อมูลจากไฟล์
    FILE *fp; // ตัวแปรสำหรับเปิดไฟล์
    int n; // ตัวแปรสำหรับเก็บจำนวนประเภทของเสื้อผ้า
    Product stock[100]; // อาร์เรย์สำหรับเก็บข้อมูลของเสื้อผ้าแต่ละประเภท
    int nStock = 0; // ตัวแปรสำหรับเก็บจำนวนประเภทของเสื้อผ้าที่มีในไฟล์
    char line[100]; // อาร์เรย์สำหรับเก็บบรรทัดข้อมูลจากไฟล์
    char date[9], time[9], name[30]; // ตัวแปรสำหรับเก็บวันที่ เวลา และชื่อประเภทเสื้อผ้า
    int amount; // ตัวแปรสำหรับเก็บจำนวนที่ขาย
    double price; // ตัวแปรสำหรับเก็บราคาที่ขาย
    int i, j; // ตัวแปรสำหรับวนลูป

    // เปิดไฟล์บันทึกการขายเสื้อผ้า
    fp = fopen(filename, "r");
    if (fp == NULL) { // ถ้าไม่สามารถเปิดไฟล์ได้
        printf("Cannot open file %s\n", filename); // แสดงข้อความแจ้งเตือน
        return; // ออกจากฟังก์ชัน
    }

    // อ่านจำนวนประเภทของเสื้อผ้าจากบรรทัดแรกของไฟล์
    fscanf(fp, "%d", &n);

    // อ่านข้อมูลจากบรรทัดที่สองเป็นต้นไป
    while (fgets(line, 100, fp) != NULL) { // วนลูปจนกว่าจะอ่านถึงสิ้นสุดไฟล์
        // แยกข้อมูลจากบรรทัดที่อ่านมา
        sscanf(line, "%8[^,],%8[^,],%29[^,],%d,%lf", date, time, name, &amount, &price);
        // ตรวจสอบว่ามีประเภทเสื้อผ้านี้ในอาร์เรย์ stock หรือไม่
        int found = 0; // ตัวแปรสำหรับเก็บสถานะว่าพบประเภทเสื้อผ้านี้หรือไม่
        for (i = 0; i < nStock; i++) { // วนลูปเช็คทุกประเภทเสื้อผ้าในอาร์เรย์ stock
            if (strcmp(stock[i].name, name) == 0) { // ถ้าชื่อประเภทเสื้อผ้าตรงกัน
                found = 1; // กำหนดสถานะว่าพบประเภทเสื้อผ้านี้
                break; // ออกจากลูป
            }
        }
        if (found) { // ถ้าพบประเภทเสื้อผ้านี้
            // เพิ่มจำนวนและยอดขายของประเภทเสื้อผ้านี้
            stock[i].amount += amount;
            stock[i].totalCost += price * amount;
        } else { // ถ้าไม่พบประเภทเสื้อผ้านี้
            // เพิ่มประเภทเสื้อผ้านี้ในอาร์เรย์ stock
            strcpy(stock[nStock].name, name);
            stock[nStock].amount = amount;
            stock[nStock].totalCost = price * amount;
            nStock++; // เพิ่มจำนวนประเภทเสื้อผ้าที่มีในไฟล์
        }
    }

    // ปิดไฟล์บันทึกการขายเสื้อผ้า
    fclose(fp);

    // เรียงลำดับประเภทเสื้อผ้าตามลำดับที่ปรากฏในไฟล์
    // ใช้วิธีการเรียงลำดับแบบ insertion sort
    for (i = 1; i < nStock; i++) { // วนลูปเริ่มจากประเภทเสื้อผ้าที่สอง
        Product temp = stock[i]; // สำเนาประเภทเสื้อผ้าที่ i ไว้ในตัวแปร temp
        j = i - 1; // กำหนดตัวแปร j เป็น i - 1
        while (j >= 0 && strcmp(temp.name, stock[j].name) < 0) { // วนลูปจนกว่า j จะน้อยกว่า 0 หรือ temp.name จะมากกว่าหรือเท่ากับ stock[j].name
            stock[j+1] = stock[j]; // เลื่อนประเภทเสื้อผ้าที่ j ไปที่ j + 1
            j--; // ลดค่า j ลง 1
        }
        stock[j+1] = temp; // นำประเภทเสื้อผ้าที่ temp ไปใส่ที่ j + 1
    }

    // แสดงผลลัพธ์
    printStock(stock, nStock);
}

int main()
{
    char filename[20];
    scanf("%s", filename);
    reportStock(filename);
}
