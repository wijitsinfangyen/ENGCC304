#include <stdio.h>

// ฟังก์ชันหาค่ามากที่สุด
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// ฟังก์ชันหาค่าน้อยที่สุด
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main() {
    int arr[100];
    int n = 0;

    printf("Enter value:\n");

    // รับค่าจากผู้ใช้จนกว่ากด Enter
    while (scanf("%d", &arr[n]) == 1) {
        n++;
        if (getchar() == '\n') break; // หยุดเมื่อกด Enter
    }

    // แสดง Index
    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d", i);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    // แสดงค่าใน Array
    printf("Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) printf(" ");
    }
    printf("\n\n");

    // เรียกใช้ฟังก์ชันหาค่า Min / Max
    printf("Min : %d\n", findMin(arr, n));
    printf("Max : %d\n", findMax(arr, n));

    return 0;
}
