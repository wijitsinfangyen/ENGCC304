#include <stdio.h>

int main() {
    int days;
    printf("Input Days : ");
    scanf("%d", &days);
    printf("%d days = %d seconds\n", days, days * 24 * 60 * 60);
    return 0;
}
