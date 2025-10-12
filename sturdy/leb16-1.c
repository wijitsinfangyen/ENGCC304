#include <stdio.h>

int main() {
    int data[] = {15, 7, 25, 3, 73, 32, 45};
    int n = 7;
    int i, j, temp, pos = -1;

    printf("Old Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", data[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (data[j] > data[j + 1]) {
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }
    printf("New Series : ");
    for (i = 0; i < n; i++) {
        printf("%d", data[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");
    
    for (i = 0; i < n; i++) {
        if (data[i] == 32) {
            pos = i + 1; 
            break;
        }
    }
    printf("Pos of 32 : %d\n", pos);
    return 0;
}
