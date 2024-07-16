#include <stdio.h>
#include <stdlib.h>

typedef struct Record {
  double m;
  double b;
  int id;
} Record;

int main() {
  // เปิดไฟล์ data_source_4.dat ในโหมดอ่านไบนารี
  FILE *fp = fopen("data_source_4.dat", "rb");
  if (fp == NULL) {
    fprintf(stderr, "Error opening file data_source_4.dat\n");
    return EXIT_FAILURE;
  }

  // อ่านขนาดของเรคคอร์ด
  size_t record_size = sizeof(Record);

  // เรคคอร์ดสำหรับเก็บข้อมูลปัจจุบัน
  Record current_record;

  // เรคคอร์ดสำหรับเก็บข้อมูลที่มี id สูงสุด
  Record max_id_record;

  // ค่า y ที่คำนวณได้จากเรคคอร์ดก่อนหน้า
  double y_prev = 1.0;

  // เริ่มต้นค่า id สูงสุด
  int max_id = 0;

  // เก็บค่า id ที่อ่านมาล่าสุด
  int last_id = -1;

  // วนซ้ำอ่านเรคคอร์ดทีละเรคคอร์ด
  while (fread(&current_record, record_size, 1, fp) == 1) {
    // ตรวจสอบว่า id นี้มากกว่า id สูงสุดหรือไม่
    if (current_record.id > max_id) {
      max_id = current_record.id;
      max_id_record = current_record;
    }

    // กรณี id เท่ากัน ให้ใช้เรคคอร์ดที่มาก่อน
    if (current_record.id == last_id) {
      // อัปเดตค่า y
      y_prev = current_record.m * y_prev + current_record.b;
    }

    // เก็บค่า id ที่อ่านมาล่าสุด
    last_id = current_record.id;
  }

  // ปิดไฟล์
  fclose(fp);

  // พิมพ์ค่า y ของเรคคอร์ดที่มี id สูงสุด
  printf("%.4f\n", y_prev);

  return EXIT_SUCCESS;
}