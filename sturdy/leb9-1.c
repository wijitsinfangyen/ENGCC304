#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    int arr[100];

    printf("Enter N :\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter value[%d] :\n", i);
        scanf("%d", &arr[i]);
    }

    printf("Index: ");
    for (int i = 0; i < n; i++) {
        printf("%d", i);
        if (i < n - 1) printf(" ");
    }
    printf("\n");

    printf("Array: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i]))
            printf("%d", arr[i]);
        else
            printf("#");

        if (i < n - 1) printf(" ");
    }
    printf("\n");

    return 0;
}
