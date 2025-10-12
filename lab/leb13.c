#include <stdio.h>

// ฟังก์ชันสำหรับสลับค่าตัวเลขโดยใช้ pointer
void swapNumbers(int *a, int *b) {
    *a = *a + *b;  // รวมค่าไว้ใน *a
    *b = *a - *b;  // คำนวณค่าใหม่ของ *b
    *a = *a - *b;  // คำนวณค่าใหม่ของ *a
}

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // รับค่าจากผู้ใช้
    printf("Enter num1 :\n");
    scanf("%d", &num1);
    printf("Enter num2 :\n");
    scanf("%d", &num2);

    // กำหนด pointer ให้ชี้ไปยังตัวแปร
    ptr1 = &num1;
    ptr2 = &num2;

    // แสดงค่าก่อนสลับ
    printf("Before swap (num1 & num2) : %d, %d\n", num1, num2);

    // เรียกใช้ฟังก์ชันสลับค่า
    swapNumbers(ptr1, ptr2);

    // แสดงค่าหลังสลับ
    printf("After swap (num1 & num2) : %d, %d\n", num1, num2);

    return 0;
}