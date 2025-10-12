#include <stdio.h>
#include <math.h>

// ฟังก์ชันตรวจสอบว่าเป็นอาร์มสตรองหรือไม่
int isArmstrong(int num) {
    int originalNum = num;
    int n = 0, remainder;
    double result = 0.0;

    // นับจำนวนหลัก
    while (originalNum != 0) {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // หาผลรวมของเลขยกกำลังตามจำนวนหลัก
    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // ตรวจสอบว่าเท่ากับเลขเดิมหรือไม่
    if ((int)result == num)
        return 1;  // เป็น Armstrong number
    else
        return 0;  // ไม่เป็น
}

int main() {
    int num;

    printf("Enter Number:\n");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
